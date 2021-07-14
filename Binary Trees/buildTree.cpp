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

int search(int inorder[], int start, int end, int curr) {
    for(int i = start; i <= end; i++) {
        if(inorder[i] == curr) {
            return i;
        }
    }
    return -1;
}

// start and end => inorder's start and end index
Node* buildTree(int preorder[], int inorder[], int start, int end) {
    static int idx = 0;

    if(start > end) {
        return NULL;
    }

    int curr = preorder[idx];
    idx++;
    Node* node = new Node(curr);

    if(start == end) {
        return node;
    }

    int pos = search(inorder, start, end, curr);
    node->left = buildTree(preorder, inorder, start, pos-1);
    node->right = buildTree(preorder, inorder, pos+1, end);

    return node;
} 

void inorderPrint(Node* root) {

    if(root == NULL) {
        return;
    }
    inorderPrint(root->left);
    cout << root->data << endl;
    inorderPrint(root->right);
    
}

int searchPNI(int inorder[], int start, int end, int val) {
    for(int i = start; i <= end; i++) {
        if(inorder[i] == val) {
            return i;
        }
    }        
    return -1;;
}

Node* buildTreePNI(int postorder[], int inorder[], int start, int end) {
    static int idx = 4;

    if(start > end) {
        return NULL;
    }

    int val = postorder[idx];
    idx--;

    Node* curr = new Node(val);

    if(start == end) {
        return curr;
    }

    int pos = searchPNI(inorder, start, end, val);
    curr->right = buildTreePNI(postorder, inorder, pos+1, end);
    curr->left = buildTreePNI(postorder, inorder, start, pos-1);

    return curr;
}

int main() {
    // Build tree from preorder and inorder

    int preorder[] = {1, 2, 4, 3, 5};
    int inorder[] = {4, 2, 1, 5, 3};

    int postorder[] = {4,2,5,3,1};
    int inorder2[] = {4,2,1,5,3};

    Node* root = buildTree(preorder, inorder, 0, 4);
    inorderPrint(root);
    cout << endl;
    Node* root2 = buildTreePNI(postorder, inorder, 0, 4);
    inorderPrint(root2);
}