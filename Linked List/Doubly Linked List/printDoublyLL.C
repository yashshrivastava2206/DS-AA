void printDoublyLL(node *head)
{
node *loc;
if(head==NULL)
{
printf("LinkedList Is Empty:");
}
else
{
loc=head;
while(loc!=NULL)
{
printf("%d \n",loc->data);
loc=loc->next;
}
}
}
