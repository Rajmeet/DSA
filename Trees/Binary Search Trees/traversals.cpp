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

/*
    Depth First Search (DFS)
        - Preorder : <root> <left> <right>
        - Inorder  : <left> <root> <right> 
        - Postorder: <left> <right> <root>  

*/

void printPreorder(Node* root) {
    if(root == NULL) return;
    cout << root->data << " ";
    printPreorder(root->left);
    printPreorder(root->right); 
}

void printInorder(Node* root) {
    if(root == NULL) return;
    printInorder(root->left);
    cout << root->data << " ";
    printInorder(root->right);
}

void printPostorder(Node* root) {
    if(root == NULL) return;
    printPostorder(root->left);
    printPostorder(root->right);
    cout << root->data << " ";
}


int main() {
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

    printInorder(root);
}