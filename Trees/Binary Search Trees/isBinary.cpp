#include <iostream>
#include <climits>
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


bool isSubtreeLesser(Node* root, int val) {
    if(root == NULL) return true;
    if(val >= root->data && isSubtreeLesser(root->left, val) && isSubtreeLesser(root->right, val)) {
        return true;
    }
    else
        return false;
}


bool isSubtreeGreater(Node* root, int val) {
    if(root == NULL) return true;
    if(val < root->data && isSubtreeGreater(root->left, val) && isSubtreeGreater(root->right, val)) {
        return true;
    }
    else 
        return false;
}


bool isBinarySearchTree(Node* root) {
    if(root == NULL) return true;
    if(isBinarySearchTree(root->left) && isBinarySearchTree(root->right) && isSubtreeGreater(root->right, root->data) && isSubtreeLesser(root->left, root->data)) {
        return true;
    }
    return false;
}


// Faster Approach
// Use ranges for each node, hence values may or may not be greater/lesser than the previous node
bool isBST(Node* root, int minVal, int maxVal) {
    if(root == NULL) return true;

    if(root->data > minVal && root->data < maxVal && isBST(root->left, minVal, root->data) && isBST(root->right, root->data, maxVal)) {
        return true;
    }
    return false;
}

int main() {
    Node* root = NULL;
    root = new Node(7);
    root->left = new Node(4);
    root->right = new Node(9);
    root->left->right = new Node(6);
    root->left->left = new Node(1);
    cout << isBinarySearchTree(root) << endl;
    cout << isBST(root, INT_MIN, INT_MAX) << endl;
}