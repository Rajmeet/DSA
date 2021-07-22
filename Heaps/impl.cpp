#include <iostream>
#include <queue>
using namespace std;

/*
HEAPS - Implemented using Binary Search Tree also called priority queue
    => MaxHeap 
        Root is the maximum of all the elements in the tree 
        root > rest of the elements present in its subtree
    => MinHeap
        Root is the minimum of all the elements in the tree
        root < rest of the elements present in its subtree
    
    Insertion in Heaps
        Heapify - insert a node to the element and check if it is greater/smaller than the node present, and then swap each other 
    
    Time Complexity
    Push - O(log n)
    Pop  - O(log n)
    Top  - O(1)
    Size - O(1)

*/

int main() {
    // Max Heap - By default follows the STL of priority queue
    priority_queue<int, vector<int>> pq;
    pq.push(2);
    pq.push(1);
    pq.push(3);
    cout << pq.top() << endl;
    pq.pop();
    cout << pq.top() << endl;

    cout << "Min Heap" << endl;
    // Min Heap - use of greater<int>
    priority_queue<int, vector<int>, greater<int>> mpq;
    mpq.push(2);
    mpq.push(1);
    mpq.push(3);
    cout << mpq.top() << endl;
    mpq.pop();
    cout << mpq.top() << endl;
}