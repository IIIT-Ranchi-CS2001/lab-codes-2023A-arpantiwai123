#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h>
// Definition for a binary tree node
struct TreeNode {
    int val;
    struct TreeNode* left;
    struct TreeNode* right;
};

// Function to create a new node
struct TreeNode* createNode(int val) {
    struct TreeNode* newNode = (struct TreeNode*)malloc(sizeof(struct TreeNode));
    newNode->val = val;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

// Function to insert a value into the BST
struct TreeNode* insert(struct TreeNode* root, int val) {
    if (!root) {
        return createNode(val);
    }

    if (val < root->val) {
        root->left = insert(root->left, val);
    } else if (val > root->val) {
        root->right = insert(root->right, val);
    }

    return root;
}

// Function to search for a value in the BST
bool search(struct TreeNode* root, int val) {
    if (!root) {
        return false;
    }

    if (root->val == val) {
        return true;
    } else if (val < root->val) {
        return search(root->left, val);
    } else {
        return search(root->right, val);
    }
}

// In-order traversal (for demonstration purposes)
void inOrderTraversal(struct TreeNode* root) {
    if (root) {
        inOrderTraversal(root->left);
        printf("%d ", root->val);
        inOrderTraversal(root->right);
    }
}

int main() {
    struct TreeNode* root = NULL;

    // Insert values into the BST
    root = insert(root, 50);
    insert(root, 30);
    insert(root, 70);
    insert(root, 20);
    insert(root, 40);
    insert(root, 60);
    insert(root, 80);

    // Search for a value
    int target = 40;
    if (search(root, target)) {
        printf("%d found in the BST.\n", target);
    } else {
        printf("%d not found in the BST.\n", target);
    }

    // In-order traversal
    printf("In-order traversal: ");
    inOrderTraversal(root);
    printf("\n");

    // Clean up memory (not shown in this example)

    return 0;
}
