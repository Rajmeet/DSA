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

// search O(log n)
Node* searchBST(Node* root, int key) {

    if(root == NULL) {
        return NULL;
    }

    if(root->data == key) {
        return root;
    }
    if(root->data > key) {
        return searchBST(root->left, key);
    } 
    // root->data < key
    return searchBST(root->right, key);   
}


// deletion

Node* inorderSucc(Node* root) {
    Node* curr = root;
    while(curr && curr->left != NULL) {
        curr = curr->left;
    }
    return curr;
}

Node* deleteInBST(Node* root, int key) {


    if(key < root->data) {
        root->left = deleteInBST(root->left, key);
    }
    else if(key > root->data) {
        root->right = deleteInBST(root->right, key);
    }
    else {
        if(root->left == NULL) {
            Node* temp = root->right;
            free(root);
            return temp;
        }
        else if(root->right == NULL) {
            Node* temp = root->right;
            free(root);
            return temp;
        }

        Node* temp = inorderSucc(root->right);
        root->data = temp->data;
        root->right = deleteInBST(root->right, temp->data);
    }
}

int main() {
    Node* root = NULL;
    root = insertBST(root, 5);
    insertBST(root, 1);
    insertBST(root, 3);
    insertBST(root, 4);
    insertBST(root, 2);
    insertBST(root, 7);

    //print inorder
    // inorder on a bst gives elements in sorted order
    inorderBST(root);

    cout << endl;
    
    /*
    BST
        4
       / \
      2   5
     / \   \
    1   3   6
    */

    Node* newroot = new Node(4);
    newroot->left = new Node(2);
    newroot->left->left = new Node(1);
    newroot->left->right = new Node(3);
    newroot->right = new Node(5);
    newroot->right->right = new Node(6);
    inorderBST(newroot);
    
    
    cout << endl;
    if(searchBST(root, 5) == NULL) {
        cout << "Key doesn't exist" << endl;
    } else {
        cout << "Key exists" << endl;
    }

    // deletion
    Node* droot = deleteInBST(newroot, 5);
    inorderBST(droot);
}