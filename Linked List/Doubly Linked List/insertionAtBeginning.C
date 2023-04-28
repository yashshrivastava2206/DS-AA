void insertionAtBeginning(node** head,node **tail , int info){
    node* ptr;
    ptr=(node*)malloc(sizeof(node));
    ptr->data=info;
    if(*head==NULL){
        *head=*tail=ptr;
        ptr->next=NULL;
    }
    else{
        (*head)->prev=ptr;
        ptr->next=*head;
        *head=ptr;
    }
    ptr->prev=NULL;
}
