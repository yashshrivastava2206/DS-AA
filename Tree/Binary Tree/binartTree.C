#include<stdio.h>
#include<stdlib.h>
typedef struct treeNode{
    struct treeNode *left;
    int data;
    struct treeNode *right;
}Tree;
typedef struct treeStk{
    Tree* next;
    struct treeStk* nxt;
}TreeStack;
void insertTree(int,Tree**);
void inorderTraversal(Tree*);
void preorderTraversal(Tree*);
void postorderTraversal(Tree*);
void inorderTraverse(Tree*);
int height(Tree*);
int countNodes(Tree*);
int countLeafNodes(Tree*);
int main(){
    int choice,value;
    Tree* root=NULL;
    while(true){
        printf("\nEnter Your Choice");
        scanf("%d",&choice);
        switch(choice){
            case 1:
            printf("Enter Data:");
            scanf("%d",&value);
            insertTree(value,&root);
            break;
            case 2:
            printf("\n InOrder Traversal :\n");
            inorderTraversal(root);
            break;
            case 3:
            printf("\n PreOrder Traversal :\n");
            preorderTraversal(root);
            break;
            case 4:
            printf("\n PostOrder Traversal :\n");
            postorderTraversal(root);
            break;
            // Non-recursive
            case 5:
            inorderTraverse(root);
            break;
            case 6:
            printf("Height of a tree is : %d",height(root));
            break;
            case 7:
            printf("Total nodes in tree are : %d ",countNodes(root));
            break;
            case 8:
            printf("Total Leaf-nodes in tree are : %d ",countLeafNodes(root));
            break;
            default:exit(0);
        }
    }
    return 0;
}
void insertTree(int val,Tree **root){
    if(*root==NULL){
        Tree* ptr=(Tree*)malloc(sizeof(Tree));
        ptr->left=ptr->right=NULL;
        ptr->data=val;
        *root=ptr;
        printf("%d",ptr->data);
    }
    else{
        if(val<(*root)->data)
        insertTree(val,&(*root)->left);
        else
        insertTree(val,&(*root)->right);
    }
}
void inorderTraversal(Tree* root){
    if(root!=NULL){
        inorderTraversal(root->left);
        printf(" %d ",root->data);
        inorderTraversal(root->right);
    }
}
void preorderTraversal(Tree* root){
    if(root!=NULL){
        printf(" %d ",root->data);
        inorderTraversal(root->left);
        inorderTraversal(root->right);
    }
}

void postorderTraversal(Tree* root){
    if(root!=NULL){
        inorderTraversal(root->left);
        inorderTraversal(root->right);
        printf(" %d ",root->data);
    }
}

void inorderTraverse(Tree* root){
    Tree* ptr=root;
    TreeStack* top=NULL;
    while(ptr!=NULL){
        printf(" %d ",ptr->data);
        if(ptr->right!=NULL)
        {
            TreeStack* stk=(TreeStack*)malloc(sizeof(TreeStack));
            if(top==NULL){
                stk->next=ptr->right;
                stk->nxt=NULL;
                top=stk;
            }
            else{
                stk->next=ptr->right;
                stk->nxt=top;
                top=stk;
            }
        }
        if(ptr->left!=NULL)
        ptr=ptr->left;
        else{
            ptr=top->next;
            top=top->nxt;
        }
    }
}
//height of a tree
int height(Tree* root){
    if(root==NULL)
    return 0;
    if(root->left==NULL &&  root->right==NULL)
    return 0;
    else{
        int lheight=height(root->left);
        int rheight=height(root->right);
        if(lheight>rheight)
        return lheight+1;
        else
        return rheight+1;
    }
}
int countNodes(Tree* root){
    if(root==NULL)
    return 0;
    else 
    return 1+ countNodes(root->left)+countNodes(root->right);
}
int countLeafNodes(Tree* root){
    if(root==NULL)
    return 0;
    else if(root->left==NULL && root->right==NULL)
    return 1;
    else 
    return countLeafNodes(root->left)+countLeafNodes(root->right);
}