#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
typedef struct queueNode{
int data;
struct queue *next;
}node;
void enqueue(int);
void dequeue();
void printQueue();
node *front=NULL,*rear=NULL;
int main()
{
int info,choice;
while(1)
{
printf("Enter your choice:");
scanf("%d",&choice);
switch(choice)
{
case 1:
printf("Enter data:");
scanf("%d",&info);
enqueue(info);
break;
case 2:
dequeue();
break;
case 3:
printQueue();
break;
default:
exit(0);
}
}
}
void enqueue(int info)
{
node *ptr;
ptr=(node*)malloc(sizeof(node));
if(ptr==NULL)
printf("Overflow");
else{
ptr->data=info;
if(front==NULL)
front=rear=ptr;
else{
rear->next=ptr;
rear=ptr;
}
ptr->next=NULL;
}
}            
void printQueue()
{
node *temp;
if(front==NULL)
printf("Empty");
else
{
temp=front;
while(temp!=NULL)
{
printf("%d,",temp->data);
temp=temp->next;
}
}
}
void dequeue()
{
node *temp=front;
if(front==NULL)
printf("Empty");
else
{
front=front->next;
free(temp);
}
return 0;
}
