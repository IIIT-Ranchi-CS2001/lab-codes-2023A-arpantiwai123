// Binary search tree coding implementation..(check if bt is bst..)
#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* left;
    struct node* right;
};
struct node* create(){
    int x;
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    printf("Enter the data of node :");
    scanf("%d",&x);
    if(x==-1) return 0;
    newnode->data = x;
    printf("Enter the leftnode of %d\n",x);
    newnode->left = create();
    printf("Enter the rightnode of %d\n",x);
    return newnode;
}
int isBST(struct node* root){
    struct node* prev = NULL;
    if(root!=NULL){
        if(!isBST(root->left)){
            return 0;
        }
        if(prev!=NULL && root->data <=prev->data){
            return 0;
        }
        prev = root;
        return isBST(root->right);
    }
    else{// null tree ko bst man lo..
        return 1;
    }
}
int main(){
    struct node* root;
    root = NULL;
    root = create();
}