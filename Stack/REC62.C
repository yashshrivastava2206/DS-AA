#include<stdio.h>
#include<conio.h>
int fact(int);
long power(int,int);
int fibonnaci(int);
void main()
{
int choice,num,p,i;
long result;
clrscr();
while(1)
{
printf("\n\n1. Factorial\n2. Power\n3. Fibonnaci Series\nEnter Your Choice:");
scanf("%d",&choice);
switch(choice)
{
case 1:
printf("Enter a number to get factorial:");
scanf("%d",&num);
result=fact(num);
printf("%d factorial is %ld",num,result);
break;
case 2:
printf("Enter the number and its power :");
scanf("%d%d",&num,&p);
result=power(num,p);
printf("%d^%d = %ld",num,p,result);
break;
case 3:
printf("Enter nth term of fibonnaci series:");
scanf("%d",&num);
for(i=0;i<=num;i++)
{
result=fibonnaci(i);
printf("%ld,",result);
}
break;
default:
exit(0);
}
}
}
int fact(int n)
{
if(n==1)
return 1;
else
return (n*fact(n-1));
}
long power(int num,int p)
{
if(p==0)
return 1;
else
return (num*power(num,p-1));
}
int fibonnaci(int n)
{
if(n==0 || n==1)
return n;
else
return fibonnaci(n-1)+fibonnaci(n-2);
}