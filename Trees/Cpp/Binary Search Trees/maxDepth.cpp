#include <iostream>
using namespace std;

/*
    Level Order Traversal
        The level order traversal is a way to do BFS (Breadth first search), in which the nodes at every level is printed till the end
        *Level Wise Traversal*
*/

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
    else if(val <= root->data){
        root->left = insert(root->left, val);
    } 
    else {
        root->right = insert(root->right, val);
    }

    return root;
}

int maxDepth(Node* root) {
    if(root == NULL) {
        return -1;
    }
    int leftDepth = maxDepth(root->left);
    int rightDepth = maxDepth(root->right);

    return (max(leftDepth, rightDepth) + 1);
}

int main() {
    Node* root = NULL;
/*
            15
           /  \
          10   20
         /       \ 
        5         25
*/
    root = insert(root, 15);
    insert(root, 10);
    insert(root, 20);
    insert(root, 5);
    insert(root, 25);

    cout << maxDepth(root) << endl;
}