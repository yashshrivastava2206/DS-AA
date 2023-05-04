#include<stdio.h>
#include<stdlib.h>
typedef struct circularNode{
    struct circularNode *prev;
    int data;
    struct circularNode *next;
}node;
void insertionFromBeginning(node **,node**,int);
void insertionFromEnd(node**,node**,int);
void deletionFromBeginning(node **,node**);
void deletionFromEnd(node**,node**);
void displayInOrder(node *);
void displayReverseOrder(node *);
int main(){
    node *head=NULL,*tail=NULL;
    int choice,info;
    while(1){
        printf("\nEnter Your Choice:");
        scanf("%d",&choice);
        switch(choice){
            case 1:
            printf("Enter data:");
            scanf("%d",&info);
            insertionFromBeginning(&head,&tail,info);
            break;
            case 2:
            printf("Enter data:");
            scanf("%d",&info);
            insertionFromEnd(&head,&tail,info);
            break;
            case 3:
            deletionFromBeginning(&head,&tail);
            break;
            case 4:
            deletionFromEnd(&head,&tail);
            break;
            case 5:
            displayInOrder(head);
            break;
            case 6:
            displayReverseOrder(tail);
            break;
            default:
            exit(0);
        }
    }
    return 0;
}
void insertionFromBeginning(node **head,node **tail,int item){
    node* ptr;
    ptr=(node*)malloc(sizeof(node));
    if(ptr==NULL)
    printf("Overflow");
    else{
        ptr->data=item;
        if(*head==NULL){
        *head=*tail=ptr;
        ptr->next=*head;
        ptr->prev=*tail;
        }
        else{
            ptr->next=(*head);
            ptr->prev=(*head)->prev;
            (*head)->prev=ptr;
            *head=ptr;
            (*tail)->next=*head;
        }
    }
}
void insertionFromEnd(node** head,node** tail,int info){
    node* ptr;
    ptr=(node*)malloc(sizeof(node));
    if(ptr==NULL)
    printf("Overflow");
    else{
        ptr->data=info;
        if(*head==NULL){
            *head=*tail=ptr;
            ptr->next=ptr->prev=*head;
        }
        else{
            ptr->next=(*tail)->next;
            (*tail)->next=ptr;
            ptr->prev=*tail;
            (*tail)=ptr;
            (*head)->prev=*tail;
        }
    }
}
void deletionFromBeginning(node** head,node** tail){
    node* temp=*head;
    if(*head==NULL)
    printf("Underflow");
    else{
        printf("Deleted item: %d",temp->data);
    if(*head==temp->prev)
    *head=*tail=NULL;
    else{
    (*head)=(*head)->next;
    (*head)->prev=*tail;
    (*tail)->next=*head;
    }
    free(temp);
    }
}
void deletionFromEnd(node** head,node** tail){
    node* temp;
    if(*tail==NULL)
    printf("Underflow");
    else{
        temp=*tail;
        printf("Deleted Item: %d",temp->data);
        if(*tail==temp->next)
        *head=*tail=NULL;
        else{
            (*tail)=(*tail)->prev;
            (*tail)->next=*head;
            (*head)->prev=*tail;
        }
        free(temp);
    }

}
void displayInOrder(node *head){
    node* temp;
    if(head==NULL)
    printf("Underflow");
    else{
        temp=head;
        do{
            printf(" %d ",temp->data);
            temp=temp->next;
        }while(temp!=head);
    }
}
void displayReverseOrder(node *tail){
    node *temp;
    if(tail==NULL)
    printf("Underflow");
    else{
        temp=tail;
        do{
            printf(" %d ",temp->data);
            temp=temp->prev;
        }while(temp!=tail);
    }
}