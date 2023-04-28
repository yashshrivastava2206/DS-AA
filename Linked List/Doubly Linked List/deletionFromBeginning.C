
void deletionFromBeginning(node** head){
    node* temp=NULL;
    if(*head== NULL)
    printf("Empty List\n");
    else{
        temp=*head;
        printf("Deleted Item :%d \n",temp->data);
        *head=(*head)->next;
        (*head)->prev=NULL;
        free(temp);
    }
}
