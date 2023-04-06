//Insertion in Sorted Array


#include <stdio.h>

int main()
{
    void insertionArray(int a[],int,int);
    int a[10],i,item;
    
    printf("Enter 9 elsments");
    for(i=0;i<9;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter element you want to input :");
    scanf("%d",&item);
    
    insertionArray(a,i,item);
    for(i=0;i<10;i++){
        printf(" %d ",a[i]);
    }
    return 0;
}

void insertionArray(int a[],int size,int item){
    
    int i;
    for(i=0;i<size;i++){
        if(a[i]>item)
        break;
    }
    for(int j=size;j>i-1;j--){
        a[j]=a[j-1];
    }
    a[i]=item;
    // for(int i=0;i<=size;i++){
    //     printf("%d , ",a[i]);
    // }
}