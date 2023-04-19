//WAP to perform insertion in unsorted array .
#include<stdio.h>
#include<conio.h>
void insertionInUnsortedArray(int a[],int* , int ,int);
void insertionInSortedArray(int a[],int* ,int);
void printArray(int a[], int);
void main()
{
int i,a[100],size,loc,value,ch;
clrscr();
printf("Enter size of array:");
scanf("%d",&size);
printf("Enter 5d elements :",size);
for(i=0;i<size;i++){
scanf("%d",&a[i]);
}
while(1)
{
printf("Enter your choice:");
scanf("%d",&ch);
switch(ch)
{
case 1:
printf("Enter the location(index):");
scanf("%d",&loc);
if(loc>=size+1)
printf("Insertion Is not possible:");
else
{
printf("Enter Value:");
scanf("%d",&value);
insertionInUnsortedArray(a,&size,loc,value);
}
break;
case 2:
printf("Enter Value:");
scanf("%d",&value);
insertionInSortedArray(a,&size,value);
break;
case 3:
printArray(a,size);
break;
default:
exit(0);
}
}
}
void insertionInUnsortedArray(int a[],int* size,int loc,int value)
{
int i;
for(i=*size;i>loc;i--)
{
a[i]=a[i-1];
}
a[loc]=value;
(*size)++;
}
void insertionInSortedArray(int a[],int* size,int data)
{
int i,j;
for(i=0;i<*size && a[i]<data;i++);
for(j=*size;j>i;j--)
{
a[j]=a[j-1];
}
a[i]=data;
(*size)++;
}
void printArray(int a[],int size)
{
int i;
for(i=0;i<size;i++)
printf("%d\n",a[i]);
}