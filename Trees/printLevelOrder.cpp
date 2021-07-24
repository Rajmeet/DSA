#include <iostream>
#include <queue>
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

void printLevelOrder(Node* root) {
    if(root == NULL) {
        return;
    }

    queue<Node*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()) {
        Node* node = q.front();
        q.pop();
        if(node != NULL) {
            cout << node->data << " ";
            if(node->left) {
                q.push(node->left);
            }
            if(node->right) {
                q.push(node->right);
            }
        }
        else if(!q.empty()) {
            q.push(NULL);
        }
    }
}

int sumAtKLevel(Node* root, int k) {
    if(root == NULL) {
        // NULL ROOT
        return -1;
    }
    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    int level = 0; // keeps the count of the level
    int sum = 0; // calculates the total sum at that level

    while(!q.empty()) {
        Node* node = q.front();
        q.pop();    

        if(node != NULL) {
            if(level == k) {
                sum += node->data;
            } 
            if(node->left) {
                q.push(node->left);
            }
            if(node->right) {
                q.push(node->right);
            }
        }   
        else if(!q.empty()) {
            q.push(NULL);
            level++;
        } 
    }
    return sum;
}



int main() {
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    printLevelOrder(root);
    cout << endl;
    cout << sumAtKLevel(root, 2);

}
