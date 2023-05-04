//Implementation of Circular Queue By using Array
#include<stdio.h>
#include<stdlib.h>
#define MAX 10
void enqueue(int);
void dequeue();
void display();
int Q[MAX],size,front=-1,rear=-1,data;
int main(){
    int choice;
    printf("Enter the capacity of array:");
    scanf("%d",&size);
    while(1){
        printf("\nEnter Your Choice:");
        scanf("%d",&choice);
        switch(choice){
            case 1:
            printf("Enter data:");
            scanf("%d",&data);
            enqueue(data);
            break;
            case 2:
            dequeue();
            break;
            case 3:
            display();
            break;
            default:
            exit(0);
        }
    }
    return 0;
}
void enqueue(int data){
    if((rear==size-1 && front==0) || (front==rear+1))
    printf("Overflow");
    else{
        if(front==-1)
        front=rear=0;
        else if(rear==size-1)
        rear=0;
        else 
        rear++;
        Q[rear]=data;
    }
    
}
void dequeue(){
    if(front==-1)
    printf("Underflow");
    else{
        printf("Deleted item :%d",Q[front]);
        if(front==rear)
        front=rear=-1;
        else{
            if(front==size-1)
            front=0;
            else
            ++front;
        }
    }
}
void display(){
    if(front==-1)
    printf("Empty");
    else{
        int i=front;
        do{
            if(front!=0 && i!=rear && i==size)
            i=0;
            printf(" %d ",Q[i]);
            i++;
        }while(i!=rear+1);
    }
}
