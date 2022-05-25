#include <iostream>
#include <queue>
#include <vector>
using namespace std;

priority_queue<int, vector<int>> pq;
priority_queue<int, vector<int>, greater<int>> mpq;

void insert(int x) {
    if(pq.size() == mpq.size()) {
        if(pq.size() == 0) {
            pq.push(x);
            return;
        }
        if(x < mpq.top()) {
            pq.push(x);
        }
        else {
            mpq.push(x);
        }
    }
}

int main() {

}