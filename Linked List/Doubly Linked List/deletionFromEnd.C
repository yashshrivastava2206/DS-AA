void deletionFromEnd(node** tail){
    node * temp=NULL;
    if(*tail==NULL)
    printf("Linked List Is Empty");
    else{
        temp=*tail;
        printf("Deleted Item :%d\n",temp->data);
        *tail=(*tail)->prev;
        (*tail)->next=NULL;
        free(temp);
    }
}
