#include<stdio.h>
#include<stdlib.h>
typedef struct nodeType{
    struct nodeType *left;
    int data;
    struct nodeType *right;
}BST;
void insertionTree(BST **,int);
void inOrderTraversal(BST*);
void preOrderTraversal(BST*);
void postOrderTraversal(BST*);
int main(){
    BST *root=NULL;
    int choice,item;
    while(1){
    printf("Enter your choice:");
    scanf("%d",&choice);
    switch(choice){
        case 1:
        printf("Enter Data:");
        scanf("%d",&item);
        insertionTree(&root,item);
        break;
        case 2:
        inOrderTraversal(root);

        break;
        case 3:
        preOrderTraversal(root);

        break;
        case 4:
        postOrderTraversal(root);
        break;
        default:
        exit(0);
    }
    }
    return 0;
}
void insertionTree(BST **root,int item){
    BST *ptr=(BST*)malloc(sizeof(BST));
    BST *parent,*loc;
    if(ptr==NULL)
    printf("Overflow");
    else{
        ptr->data=item;
        ptr->left=ptr->right=NULL;
        if(*root==NULL)
        *root=ptr;
        else{
            loc=*root;
            while(loc!=NULL){
                parent=loc;
                if(item>loc->data)
                loc=loc->right;
                else
                loc=loc->left;
            }
            if(item>parent->data)
            parent->right=ptr;
            else
            parent->left=ptr;
        }
    }
}
//In Order Traversal
void inOrderTraversal(BST* root){
    if(root!=NULL){
    inOrderTraversal(root->left);
    printf(" %d ",root->data);
    inOrderTraversal(root->right);
    printf("\n");
    }
}

//Pre Order Traversal
void preOrderTraversal(BST* root){
    if(root!=NULL){
    printf(" %d ",root->data);
    inOrderTraversal(root->left);
    inOrderTraversal(root->right);
    printf("\n");
    }
}

//Post Order Traversal
void postOrderTraversal(BST* temp){
    if(temp!=NULL){
    inOrderTraversal(temp->left);
    inOrderTraversal(temp->right);
    printf(" %d ",temp->data);
    printf("\n");
    }
}
