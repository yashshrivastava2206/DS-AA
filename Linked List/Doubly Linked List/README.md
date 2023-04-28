<h2>header files</h2>
#include<stdio.h><br>
#include<stdlib.h><br>
#include<conio.h><br>
<h1>Structure Of Doubly Linked List</h1>
//Structure of Doubly Linked List<br>
typedef struct doublyLL<br>
{<br>
struct doublyLL* prev;<br>
int data;<br>
struct doublyLL* next;<br>
}node;<br>
<h1>Main Function</h1>
<h3>Insertion Operations</h3>
void insertionAtEnd(node ** , node** , int);<br>
void insertionAtBeginning(node** ,node **, int);<br>
<h3>Deletion Operations</h3>
void deletionFromEnd(node **);<br>
void deletionFromBeginning(node**);<br>
<h3>Display Operations</h3>
void printDoublyLL(node*);<br>
void printReverse(node*);<br>
int count=0;<br>
int main()<br>
{<br>
int item,choice;<br>
node *head,*tail;<br>
head=tail=NULL;<br>
//clrscr();<br><br>
while(1)<br>
{<br>
printf("Enter Your Choice :");<br>
scanf("%d",&choice);<br>
switch(choice)<br>
{<br>
case 1: count++;<br>
printf("\nInsertion At End\n");<br>
printf("Enter data here :");<br>
scanf("%d",&item);<br>
insertionAtEnd(&head,&tail,item);<br>
break;<br>
case 2: count++;<br>
printf("\nInsertion At Beginning\n");<br>
printf("Enter data here :");<br>
scanf("%d",&item);<br>
insertionAtBeginning(&head,&tail,item);<br>
break;<br>
case 3: count --;<br>
deletionFromEnd(&tail);<br>
break;<br>
case 4: count--;<br>
deletionFromBeginning(&head);<br>
break;<br>
case 5:<br>
printf("Entered Data is :\n");<br><br>
printDoublyLL(head);<br>
break;<br>
case 6:<br>
printReverse(tail);<br>
break;<br>
case 7:<br>
printf("Elements In List %d\n",count);<br>
break;<br>
default:<br>
exit(0);<br>
}<br>
}<br>
return 0;<br>
}<br>
