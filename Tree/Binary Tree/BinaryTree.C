#include<stdio.h>
#include<stdlib.h>
typedef struct treeNode{
    struct treeNode* left;
    char data;
    struct treeNode* right;
}node;
node* create();
void inOrderTraversal(node*);
void preOrderTraversal(node*);
void postOrderTraversal(node*);
int main(){
    node* root=NULL;
    printf("Enter Root Node:");
    root=create();
    inOrderTraversal(root);
    printf("\n");
    preOrderTraversal(root);
    printf("\n");
    postOrderTraversal(root);
    return 0;
}

//Create a Tree
node* create(){
    node* ptr=(node*)malloc(sizeof(node));
    if(ptr==NULL)
    printf("Overflow");
    else{
        // printf("Enter the data:");
        scanf("%d",&ptr->data);
        if(ptr->data==-1)
        return NULL;
        printf("Enter left node of %d :",ptr->data);
        ptr->left=create();
        printf("Enter right node of %d :",ptr->data);
        ptr->right=create();
    }
    return ptr;
}

//In Order Traversal
void inOrderTraversal(node* root){
    if(root!=NULL){
    inOrderTraversal(root->left);
    printf(" %d ",root->data);
    inOrderTraversal(root->right);
    }
}

//Pre Order Traversal
void preOrderTraversal(node* root){
    if(root!=NULL){
    printf(" %d ",root->data);
    inOrderTraversal(root->left);
    inOrderTraversal(root->right);
    }
}

//Post Order Traversal
void postOrderTraversal(node* temp){
    if(temp!=NULL){
    inOrderTraversal(temp->left);
    inOrderTraversal(temp->right);
    printf(" %d ",temp->data);
    }
}
