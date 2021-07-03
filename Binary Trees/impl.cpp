#include <iostream>
using namespace std;

struct Node {
    int data;
    struct Node* left;
    struct Node* right;

    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};  

void preorderTraversal(Node* root) {
    if(root == NULL) {
        return;
    }
    cout << root->data << " ";
    preorderTraversal(root->left);
    preorderTraversal(root->right);
}

void inorderTraversal(Node* root) {

    if(root == NULL) {
        return;
    }

    inorderTraversal(root->left);
    cout << root->data << " ";
    inorderTraversal(root->right);
}   

void postorderTraversal(Node* root) {
    if(root == NULL) {
        return;
    }
    postorderTraversal(root->left);
    postorderTraversal(root->right);
    cout << root->data << " ";

}

int main() {

    /*
     1
    / \
   2   3
*/
    struct Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
/*
      1
    /   \
   2     3
  / \   / \
  4  5 6   7
*/
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    preorderTraversal(root);
    cout << endl;
    inorderTraversal(root);
    cout << endl;
    postorderTraversal(root);
}
