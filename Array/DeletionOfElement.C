//Deletion operation in 1D Array

#include <stdio.h>

int main()
{
    void deletion(int a[], int ,int);
    int arr[100],i,target,size;
    printf("Enter size of array :");
    scanf("%d",&size);
    printf("Enter %d elements:",size);
    for(i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    
    printf("Enter element you want to delete :");
    scanf("%d",&target);
    
    deletion(arr,size,target);
    
    for(i=0;i<size-1;i++){
        printf("%d ",arr[i]);
    }
    
    return 0;
}

void deletion(int a[],int size, int target){
    int i=0;
    while(size>i && a[i]!=target){
        i++;
    }
    if(i>size) 
     printf("Element is not in arrays");
    else{
        for(;i<size;i++){
            a[i]=a[i+1];
        }
    }
}
