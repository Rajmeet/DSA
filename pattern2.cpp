#include<iostream>
using std::endl; using std::cout; using std::cin;

void invertedNumberPat() {
    for(int i = 5; i>0; i--) {
        for(int j = 1; j<=i; j++) {
            cout << j << " ";
        }
        cout << endl;
    }
}

void zeroOnePattern() {
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j <= i; j++) {
            if((i+j)%2 == 0){
            // if (i % 2 == 0 && j % 2 == 0) {
                cout << "1 ";
            }
            else {
                cout << "0 ";
            }
        }
        cout << endl;
    }
}

void rhombus() {
    for (int i = 0; i <= 4; i++)
    {
        for(int j = 0; j <= 4-i; j++) {
            cout << " ";
        }
        for(int j = 0; j <= 4; j++) {
            cout << "*";
        }
        cout << endl;
    }
    
}

void noPattern() {
    for(int i = 1; i <= 5; i++) {
        for(int j = 1; j <= (5-i); j++) {
            cout << " ";
        }
        for(int j = 1; j <= i; j++) {
            cout << j << " ";
        }
        cout << endl;
    }

}

void palindromicPattern() {
    for(int i = 1; i <= 5; i++) {
        int j;
        for(j=1;j <= 5-i; j++) {
            cout << " ";
        }
        int k = i;
        for(j; j <= 5; j++) {
            cout << k--;
        }
        k =2;
        for(; j < 5+i-1; j++) {
            cout << k++;
        }
        cout << endl;
    }
}

void starPattern() {
    for(int i = 1; i <= 5; i++) {
        int j;
        for(j=1;j <= 5-i; j++) {
            cout << " ";
        }
        int k = i;
        for(j; j <= 5; j++) {
            cout << "*";
        }
        k =2;
        for(; j < 5+i-1; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

int main() {

    // inverted number pattern
    cout << "inverted number pattern" << endl;
    invertedNumberPat();

    cout << endl << endl;

    // 0 1 pattern
    cout <<  "Pattern 0 1" << endl;
    zeroOnePattern();

    cout << endl << endl;

    // rhombus
    cout << "Rhombus Pattern" << endl;
    rhombus();    

    cout << endl << endl;
    
    // number pattern
    cout << "Number Pattern" << endl;
    noPattern();

    cout << endl << endl;

    // palidromic pattern
    cout << "Palindromic Pattern" << endl;
    palindromicPattern();  

    // star pattern
    cout << "Star Pattern" << endl;
    starPattern();

}