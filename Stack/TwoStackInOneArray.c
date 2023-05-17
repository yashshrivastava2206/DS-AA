#include<stdio.h>
#include<conio.h>
#define MAX 10
int arr[MAX],top1=-1,top2=MAX;
void push(int,int);
void main()
{
int item,choice;
while(10
{
printf("\nEnter Your Choice : ");
scanf("%d", &choice);
switch(choice)
{
case 1:
printf("Push value in Stack : ");
scanf("%d", &item);
push(item,1);
break;
case 2:
printf("Push value in Stack : ");
scanf("%d", &item);
push(item,2);
break;
default:
exit(0);
}
}
}
void push(int item,int stack)
{
if(stack==1)
{
if(top1+1==top2 || top1+1==MAX )
{
printf("Insertion not possible ");
}
else
{
++top1;
arr[top1]=item;
}
}
else
{
if(top2-1==top1 || top2 ==-1 )
{
printf("Insertion not possible:");
}
else
{
--top2;
arr[top2]=item;
}
}
}