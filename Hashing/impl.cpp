#include <iostream>
#include <map>
#include <unordered_map>
using namespace std;

/*
Hashing: A way to access and work with the indices
Converting elements into smaller elements using some functions i.e hash functions
Collision - Same keys after collision 
Collision Handling
    - Seperate Chaining - Create a chain of values at the same key (linked list) 
        Search Time Worst Case - O(N)
        Load Factor - n/b

    - Open Addressing - Probing - passing a second argument in the hash function, it depends on key
        Linear Probing: P(K) = a*k + b
        Quadratic Probing: P(K) = a*k^2 + b*k + c
        Double Hashing: P(k,x) = k*h2(x), h2(x)

Unordered Map - Implemented using an array of buckets
Map: A key value pair datatype
*/

int main() {
    unordered_map<int, int> ump;
    ump[8] = 2;
    cout << ump[8] << endl; 
}