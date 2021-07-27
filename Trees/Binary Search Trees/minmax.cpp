#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};

//insertion
Node* insertBST(Node* root, int val) {
    if(root == NULL) {
        return new Node(val);
    }
    if(val < root->data) {
        root->left = insertBST(root->left, val);
    } else {
        // val > root->data
        root->right = insertBST(root->right, val);
    }
    return root;
}

void inorderBST(Node* root) {
    if(root == NULL){
        return;
    }
    inorderBST(root->left);
    cout << root->data << " ";
    inorderBST(root->right);
}

// Iterative
int findMin(Node* root) {
    if(root == NULL) {
        return -1;
    }
    while(root->left != NULL) {
        root = root->left;
    }
    return root->data;
}

int findMax(Node* root) {
    if(root == NULL) {
        return -1;
    }
    while(root->right != NULL) {
        root = root->right;
    }
    return root->data;
}

// Recursively
int findMinRecursive(Node* root) {
    if(root == NULL) {
        return -1;
    }
    else if(root->left == NULL){
        return root->data;
    }
    return findMinRecursive(root->left);
}

int findMaxRecursive(Node* root) {
    if(root == NULL) {
        return -1;
    }
    else if(root->right == NULL){
        return root->data;
    }
    return findMaxRecursive(root->right);
}

int main() {
    Node* root = NULL;
    root = insertBST(root, 15);
    insertBST(root, 10);
    insertBST(root, 20);
    insertBST(root, 8);
    insertBST(root, 12);
    insertBST(root, 17);
    insertBST(root, 25);
    
    cout << findMin(root) << endl;
    cout << findMinRecursive(root) << endl;
    cout << findMaxRecursive(root) << endl;
    cout << findMax(root) << endl;
}