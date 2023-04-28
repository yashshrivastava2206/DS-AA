
void printReverse(node * tail){
    node *temp;
    if(tail==NULL)
    printf("Empty Linked List");
    else{
        temp=tail;
        while(temp!=NULL){
            printf("%d\n",temp->data);
            temp=temp->prev;
        }
    }
}
