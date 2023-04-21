#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

typedef struct stackNode
{
int data;
struct stackNode* next;
}node;
void push(node **,int);
void pop(node **);
void printStack(node *);
void main()
{
node *top=NULL;
int ch,item;
clrscr();
while(1)
{
printf("Enter your choice:");
scanf("%d",&ch);
switch(ch)
{
case 1:
printf("Enter info.:");
scanf("%d",&item);
push(&top,item);
break;
case 2:
if(top==NULL)
printf("Stack is empty");
else
pop(&top);
break;
case 3:
if(top==NULL)
printf("Stack is Empty");
else
printStack(top);
break;
default:
exit(0);
}
}
}
//case 1:
void push(node** top,int info)
{
node* ptr;
ptr=(node*)malloc(sizeof(node));
ptr->next=*top;
ptr->data=info;
*top=ptr;
}
//case 2:
void printStack(node *top)
{
node* loc;
loc=top;
while(loc!=NULL)
{
 printf("%d ",loc->data);
 loc=loc->next;
}
}
//case 3:
void pop(node** top)
{
node* temp;
temp=*top;
printf("Popped element: %d",temp->data);
*top=(*top)->next;
free(temp);
}