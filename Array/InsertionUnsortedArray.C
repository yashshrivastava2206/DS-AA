// Array: Insertion in Unsorted Array

#include <stdio.h>

int main()
{
    void insertionArray(int a[],int,int,int);
    int a[10],i,loc,item;
    
    printf("Enter 9 elsments");
    for(i=0;i<9;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter element you want to input :");
    scanf("%d",&item);
    
    printf("Enter location in which your input item ");
    scanf("%d",&loc);
    
    insertionArray(a,10,loc,item);
    return 0;
}

void insertionArray(int a[],int size,int loc,int item){
    for(int i=size;i>loc;i--){
        a[i-1]=a[i-2];
    }
    a[loc]=item;
    for(int i=0;i<size;i++){
        printf("%d , ",a[i]);
    }
}