<h2>header files</h2>
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
<h1>Structure Of oubly Linked List</h1>
//Structure of Doubly Linked List
typedef struct doublyLL
{
struct doublyLL* prev;
int data;
struct doublyLL* next;
}node;
<h1>Main Function</h1>
<h3>Insertion Operations</h3>
void insertionAtEnd(node ** , node** , int);
void insertionAtBeginning(node** ,node **, int);
<h3>Deletion Operations</h3>
void deletionFromEnd(node **);
void deletionFromBeginning(node**);
<h3>Display Operations</h3>
void printDoublyLL(node*);
void printReverse(node*);
int count=0;
int main()
{
int item,choice;
node *head,*tail;
head=tail=NULL;
//clrscr();
while(1)
{
printf("Enter Your Choice :");
scanf("%d",&choice);
switch(choice)
{
case 1: count++;
printf("\nInsertion At End\n");
printf("Enter data here :");
scanf("%d",&item);
insertionAtEnd(&head,&tail,item);
break;
case 2: count++;
printf("\nInsertion At Beginning\n");
printf("Enter data here :");
scanf("%d",&item);
insertionAtBeginning(&head,&tail,item);
break;
case 3: count --;
deletionFromEnd(&tail);
break;
case 4: count--;
deletionFromBeginning(&head);
break;
case 5:
printf("Entered Data is :\n");
printDoublyLL(head);
break;
case 6:
printReverse(tail);
break;
case 7:
printf("Elements In List %d\n",count);
break;
default:
exit(0);
}
}
return 0;
}
