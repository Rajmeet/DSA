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

Node* FindMin(Node* root) {
    while(root->left != NULL) {
        root = root->left;
    }
    return root;
}

Node* Delete(Node* root, int data) {
    if(root == NULL) return root;
    else if(data < root->data) {
        root->left = Delete(root->left, data);
    }
    else if(data > root->data) {
        root->right = Delete(root->right, data);
    }
    else {
        // Case 1: No child
        if(root->left == NULL && root->right == NULL) {
            delete root;
            root = NULL;
        }

        // Case 2: One Child
        else if(root->left == NULL) {
            Node* temp = root;
            root = root->right;
            delete temp;
        }

        else if(root->right == NULL) {
            Node* temp = root;
            root = root->left;
            delete temp;
        }
        
        // Case 3: 2 Children
        else {
            Node* temp = FindMin(root->right);
            root->data = temp->data;
            root->right = Delete(root->right, temp->data);
        }
    }
    
    return root;
}

int main() {
    Node* root = NULL;
    root = new Node(12);
    root->left = new Node(5);
    root->right = new Node(15);
    root->right->right = new Node(17);
    root->right->left = new Node(13);
    root->left->left = new Node(3);
    root->left->left->left = new Node(1);
    root->left->right = new Node(7);
    root->left->right->right = new Node(9);

}