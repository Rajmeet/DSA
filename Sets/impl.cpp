#include <iostream>
#include <set>
using namespace std;

/*
Time Complexity
- Insertion and Deletion - O(log N)
   but for unordered set - O(1)

Ordered Set
- Contains unique elements and are in sorted order
- Implemented using balanced BST
- Random access is not possible, since you can't get the ith element

Multi Set
- Contains elements in sorted order but can have duplicates as well
- Implemented using balanced BST
- Random access is not possible, since you can't get the ith element
- s.erase(key) = removes all the occurances and to delete just the first occurance we can do 
  s.erase(s.find)

Unordered Set
- Contains unique elements and in random order
- Implemented using hashing
- Random access not possible, since you can't get the ith element
*/

int main() {
    set<int> s; 
    s.insert(1);
    s.insert(2);
    s.insert(2);
    s.insert(3);
    for(auto i : s) {
        cout << i << " ";
    } cout << endl;
    for(auto i = s.begin(); i != s.end(); i++) {
        cout << *i << " ";
    } cout << endl;
    cout << "Reverse print" << endl;
    for(auto i = s.rbegin(); i != s.rend(); i++) {
        cout << *i << " ";
    } cout << endl;


    cout << "MultiSet" << endl;
    multiset<int> ms;
    ms.insert(1);
    ms.insert(2);
    ms.insert(2);
    ms.insert(3);
    for(auto i : ms) {
        cout << i << " ";
    } cout << endl;

    cout << "Unordered Set" << endl;

}   

