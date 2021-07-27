#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* right;
    Node* left;

    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};

Node* insert(Node* root, int val) {
    if(root == NULL) {
        return new Node(val);
    }
    else if(val <= root->data) {
        root->left = insert(root->left, val);
    }
    else {
        root->right = insert(root->right, val);
    }
    return root;
}

bool search(Node* root, int val) {
    if(root == NULL) {
        return false;
    }
    
    else if(root->data == val) {
        return true;
    }

    else if(val <= root->data) {
        return search(root->left, val);
    }
    else {
        return search(root->right, val);
    }
}

int main() {
    Node* root = NULL;
    root = insert(root, 15);
    insert(root, 20);
    insert(root, 5);
    insert(root, 30);
    insert(root, 10);

    cout << search(root, 20) << endl;
}

