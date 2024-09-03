// Binary tree implementation..Postorder 
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
    printf("Enter the data and (-1 data for no node) :");
    scanf("%d",&x);
    if(x==-1){
        return 0;
    }
    newnode->data = x;
    printf("Enter the left child of %d\n",x);
    newnode->left = create();
    printf("Enter the right child of %d\n",x);
    newnode->right = create();
    return newnode;
}
void postorder(struct node* root){
    if(root==NULL) return;
    postorder(root->left);
    postorder(root->right);
    printf("%d",root->data);
}
int main(){
    struct node* root;
    root = 0;
    root = create();
    postorder(root);
    return 0;
}