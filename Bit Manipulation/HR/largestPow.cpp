#include <iostream>
using namespace std;

// Find the largest power of 2 (most significant bit in binary form), which is less than or equal to the given number N.

int largest_power(int N){
        //changing all right side bits to 1.
        N = N | (N>>1);
        N = N | (N>>2);
        N = N | (N>>4);
        N = N | (N>>8);


    //as now the number is 2 * x-1, where x is required answer, so adding 1 and dividing it by 2 
        return (N+1)>>1;

}

int main() {
    int n = 21;
    cout << largest_power(n) << endl;
}
