#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
typedef struct queueNode{
    char data[12];
    int priority;
    struct queueNode* next;
}node;
void create(node **,char name[],int);
void deletion(node **);
void display(node *);
int main(){
    node *head=NULL;
    int choice,prio ;
    char name[12];
    while(1){
        printf("\nEnter your choice:");
        scanf("%d",&choice);
        switch(choice){
            case 1:
            printf("Enter priority:");
            scanf("%d",&prio);
            printf("Enter data:");
            scanf("%s",&name);
            create(&head,name,prio);
            break;
            case 2:
            if(head!=NULL)
            deletion(&head);
            else 
            printf("Underflow");
            break;
            case 3:
            display(head);
            break;
            default:
            exit(0);
        }
    }
    return 0;
}
void create(node **head,char name[],int prio){
    //Hightest priority is one....!
    node* temp,*loc;
    node* ptr=(node*)malloc(sizeof(node));
    if(ptr==NULL)
    printf("Overflow");
    else{
        ptr->priority=prio;
        strcpy(ptr->data,name);
        if(*head==NULL || (*head)->priority>ptr->priority){
        ptr->next=*head;
        *head=ptr;
        }
        else{
            loc=temp=*head;
            do{
                if(ptr->priority<temp->priority)
                break;
                loc=temp;
                temp=temp->next;
            }while(temp!=NULL);
            ptr->next=loc->next;
            loc->next=ptr;
        }
    }
}
void deletion(node **head){
    node *temp=*head;
    printf("Deleted : %s ",(*head)->data);
    *head=(*head)->next;
    free(temp);
}
void display(node *head){
    if(head==NULL)
    printf("Underflow");
    else{
        do{
            printf("%s ",head->data);
            head=head->next;
        }while(head!=NULL);
    }
}