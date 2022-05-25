#include<iostream>
#include<cmath>
#include<string>
using std::string;
using std::endl; using std::cout; using std::endl; 

bool validPrime(int n) {

    // if(n <= 3 && n > 0) {
    //     return true;
    // }

    // if(n % 2 == 0 || n % 3 == 0) { // doesnt work for 2 and 3
    //     return false;
    // }
    
    for(int i = 2; i<sqrt(n); i++) { // sqrt(n) works as a factor
        if(n%i == 0) {
            return false;
        }
    }
    return true;
}


int reverseNumber(int n) {
    string temp = std::to_string(n);
    string result; 
    for(int i = temp.size()-1; i >= 0; i--) {
        result+=temp.at(i);
    }
    return stoi(result);
    /*
    int reverse = 0;
    while(n>0) {
        int lastDigit = n%10;
        reverse = reverse*10 + lastDigit;
        n=n/10;
    }
    */
}

bool armstrongNumber(int n) {
    int total=0;
    int result = n;
    while(n>0) {
        int lastDigit = n%10;
        // cout << "lastdigit:" << lastDigit << endl;
        total+=pow(lastDigit,3);
        // cout << "total:" << total << endl; 
        n=n/10;
    }
    // cout << total << endl;
    if(total == result) {
        return true;
    }
    return false;
}


int main() {

    // check prime
    cout << "Check if number is prime" << endl;
    cout << validPrime(35) << endl;

    cout << endl << endl;

    // reverse a number
    cout << "Reverse Number" << endl;
    cout << reverseNumber(1234) << endl;

    cout << endl << endl;

    // check armstrong number
    cout << "ArmStrong Number" << endl;
    cout << armstrongNumber(153) << endl;
}