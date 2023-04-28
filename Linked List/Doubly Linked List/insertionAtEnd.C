void insertionAtEnd(node **head,node** tail,int info)
{
node* ptr;
ptr=(node*)malloc(sizeof(node));
ptr->data=info;
if(*head==NULL){
ptr->prev=ptr->next=NULL;
*head=*tail=ptr;
}
else
{
ptr->prev=*tail;
ptr->next=NULL;
(*tail)->next=ptr;
*tail=ptr;
}
}
