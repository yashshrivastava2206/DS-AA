#include<stdio.h>
#include<stdlib.h>
typedef struct circularNode
{
    int data;
    struct circularNode * next;
}node;
void insertionFromEnd(node **,int);
void deletionFromEnd(node *);
void display(node *);
int main(){
    node* head=NULL;
    int info,choice;
    while(1){
        printf("\nEnter your choice:");
        scanf("%d",&choice);
        switch(choice){
            case 1:
            printf("Enter data:");
            scanf("%d",&info);
            insertionFromEnd(&head,info);
            break;
            case 2:
            if(head==NULL)
            printf("Underflow");
            else
            deletionFromEnd(head);
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
void insertionFromEnd(node **head,int info){
    node* temp;
    node* ptr=(node*)malloc(sizeof(node));
    if(ptr==NULL)
    printf("Overflow");
    else{
        ptr->data=info;
        if(*head==NULL){
            *head=ptr;
        
        }
        else{
            temp=*head;
            while(temp->next!=(*head)){
                temp=temp->next;
            }
            temp->next=ptr;
        }
        ptr->next=*head;
    }
}
void display( node* head){
    node *temp=head;
    if(head==NULL)
    printf("Empty\n");
    else{
        do{
            printf("%d ",temp->data);
            temp=temp->next;
        }while(temp!=head);
    }
}
void deletionFromEnd(node *head){
    node *temp,*loc;
        temp=head;
        while(temp->next!=head){
            loc=temp;
            temp=temp->next;
        }
        loc->next=head;
        free(temp);
}
