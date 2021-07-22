#include <iostream>
#include <vector>
#include <map>
#include <unordered_map>
using namespace std;


struct Node 
{
    int key;
    Node* left;
    Node* right;
};

Node* newNode(int key) {
    Node* node = new Node;
    node->key = key;
    node->left = node->right = NULL;
    return node;
}

void getVerticalOrder(Node* root, int hdis, map<int, vector<int>>& m) 
{
    if(root == NULL) {
        return;
    }

    m[hdis].push_back(root->key);
    getVerticalOrder(root->left, hdis-1, m);
    getVerticalOrder(root->right, hdis+1, m);

}

int main() {
    Node* root = newNode(10);
    root->left = newNode(7);
    root->right = newNode(4);
    root->left->left = newNode(3);
    root->left->right = newNode(11);
    root->right->left = newNode(14);
    root->right->right = newNode(6);

    map<int, vector<int>> m;
    int hdis = 0;

    getVerticalOrder(root, hdis, m);

    for(auto x: m) {
        // cout << x.first << " ";
        for(auto y: x.second) {
            cout << y << " ";
        }
        cout << endl;
    }
}