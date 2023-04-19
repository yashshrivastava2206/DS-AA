//Necessary and Sufficient condition for Binary Searching is that the Array must be sorted..


#include <stdio.h>

int main()
{
    int binarySearch(int a[],int, int);
    int a[10],item,i,result,size;
    printf("Enter the size of array ");
    scanf("%d",&size);
    printf("Enter %d Elements",size);
    for(i=0;i<size;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter element you want to find:");
    scanf("%d",&item);
    
    result= binarySearch(a,size,item);
    if(result==-1){
        printf("Not Found");
    }
    else{
        printf("Element fount in %d position",result);
    }
    return 0;
}
int binarySearch(int a[] , int size ,int target){
    int start,mid,last;
    start=0;
    mid=(size-1)/2;
    last=size-1;
    while(mid<=last && mid!=target){
        if(target>mid){
            start=mid+1;
            mid=(start+last)/2;
        }
        else{
            last=mid-1;
            mid=(start+mid)/2;
        }
    }
    if(mid<=last){
        return mid;
    }
    return -1;
    
}