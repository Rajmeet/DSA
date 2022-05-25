#include <iostream>
#include <queue>
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


void printLevelOrder(Node* root) {
    if(root == NULL) {
        return;
    }
    queue<Node*> q;
    q.push(root);

    while(!q.empty()) {
        Node* curr = q.front();
        cout << curr->data << endl;
        if(curr->left != NULL) q.push(curr->left);
        if(curr->right != NULL) q.push(curr->right);
        q.pop();
    } 
}

int main() {
    Node* root = NULL;
    root = new Node(15);
    root->left = new Node(10);
    root->left->left = new Node(5);
    
    root->right = new Node(20);
    root->right->right = new Node(25);

    printLevelOrder(root);
}