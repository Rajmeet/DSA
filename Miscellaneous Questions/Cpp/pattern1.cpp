#include<iostream>
using std::endl; using std::cout; using std::cin;


void crRec() {
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << "*" << " ";
        }
        cout << endl;
    }
    
}

void hollowRec() {
    for(int i =0; i<5; i++) {
        for(int j = 0; j < 4; j++) {
            if(i == 0 || i == 4 || j == 0 || j == 3){
                cout << "*";
            }
            else {
                cout << " ";
            }
        }
        cout << endl;
    }
}

void invertedPyramid() {

    for (int i = 0; i < 5; i++)
    {
        for (int j = i; j < 5; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    
}

void halfPyramid180() {
    for(int i = 0; i<=5; i++) { 
        for (int j = 0; j <= 5; j++)
        {
            if(j<=4-i) {
                cout << "  ";
            }
            else {
                cout << "* ";
            }
        }
        cout << endl;
    }
}

void halfPyramidNo() {
    for (int i = 1; i <= 5; i++)
    {
        for(int j = 1; j <= i; j++) {
            cout << i;
        }
        cout << endl;
    }
}

void floydTriangle() {
    int cnt = 1;
    for (int i = 0; i <= 4; i++)
    {
        for(int j = 0; j <= i; j++) {
            cout << cnt << " ";
            cnt++;
        }
        
        cout << endl;
    }
}

void butterflyPattern() {
    int n = 5;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++) {
            cout << "*";
        }
        int space = 2*n - 2*i;
        for(int j=1; j<=space; j++) {
            cout << " ";
        }
        for(int j =1; j<=i; j++) {
            cout << "*";
        }
        cout << endl;
    }
    for(int i = n; i>=1; i--) {
        for(int j = 1; j <= i; j++) {
            cout << "*";
        }
        int space = 2*n - 2*i;
        for(int j=1; j<=space; j++) {
            cout << " ";
        }
        for(int j =1; j<=i; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

int main() {

    // normal rectangle
    cout << "normal rectangle: " << endl;
    crRec();

    cout << endl << endl;

    // hollow rectangle
    cout << "hollow rectangle: " << endl;
    hollowRec();

    cout << endl << endl;

    // inverted pyramid
    cout << "inverted pyramid " << endl;
    invertedPyramid();

    cout << endl << endl;

    // inverted half pyramid
    cout << "half pyramid inverted" << endl;
    halfPyramid180();

    cout << endl << endl;

    // half pyramid numbers
    cout << "half pyramid numbers" << endl;
    halfPyramidNo();

    cout << endl << endl;

    // floyd triangle pyramid
    cout << "Floyd's Triangle" << endl;
    floydTriangle();

    cout << endl << endl;

    // butterfly pattern
    cout << "Butterfly Pattern" << endl;
    butterflyPattern();

}