#include<stdio.h>
#include<stdlib.h>
void Heapify(int a[],int);
void ReHeapifyDownward(int a[],int,int);
void HeapSort(int a[],int);

int main(){
    int arr[100],size;
    printf("Enter Size:");
    scanf("%d",&size);
    printf("Enter %d elements:",size);
    for(int i=1;i<=size;i++){
        scanf("%d",&arr[i]);
    }
    printf("\n");
    HeapSort(arr,size);
    for(int i=1;i<=size;i++){
        printf(" %d ",arr[i]);
    }
    return 0;
}
void HeapSort(int a[],int n){
    // printf("\n Heap Sort");
    Heapify(a,n);
    int i;
    for(i=n;i>1;i--){
        int temp=a[1];
        a[1]=a[i];
        a[i]=temp;
        ReHeapifyDownward(a,1,i-1);
    }
}
void Heapify(int a[],int n){
    // void ReHeapifyDownward(int a[],int,int);
    // printf("\n Heapify");
    int idx=n/2;
    int i;
    for(i=idx;i>=1;i--){
        ReHeapifyDownward(a,i,n);
    }
    // printf("\n Heapify End");
}
void ReHeapifyDownward(int a[],int start,int end){
    // printf("\n Re Heapify");
    int lchild=2*start;
    int rchild=lchild+1;
    int max,idx,temp;
    if(lchild<=end){
        max=a[lchild];
        idx=lchild;
        if(rchild<=end){
            if(a[rchild]>max){
            max=a[rchild];
            idx=rchild;
            }
    }
    if(a[start]<a[idx]){
        temp=a[start];
        a[start]=a[idx];
        a[idx]=temp;
        ReHeapifyDownward(a,idx,end);
      }
    }   
}
