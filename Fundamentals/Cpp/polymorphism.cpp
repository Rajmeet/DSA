/*
POLYMORPHISM
Poly = Many  Morphism = Forms
Example: Carbon -> Graphite, Diamond, CO2 etc

Types:
- Compile Time
    - Function Overloading - Different Functions with different types of paramters or different number of parameters
    - Operator Overloading - Addition of Complex Numbers
- Run Time
    - Virtual Functions - If the function names of a derived class matches with that of the base class then the compiler is confused which needs to be printed and used. Hence by using a virtual keyword we can achieve this. The virtual keyword allows it to be dynamically binded.
*/


#include <iostream>
using namespace std;

// function overloading
class A {
    public:
        void fun() {
            cout << "I am a function with no arguments" << endl;
        }
        void fun(int a) {
            cout << "I am a function with one arguments" << endl;
        }
        void fun(int a, int b) {
            cout << "I am a function with two arguments" << endl;
        }
};

// Operator Overloading 
class Complex {
    private:
        int real, imag;
    public:
        Complex() = default;
        Complex(int r, int i) {
            real = r;
            imag = i;
        }
        Complex operator + (Complex const &obj) {
            Complex res;
            res.imag = imag + obj.imag;
            res.real = real + obj.real;
        }
        void display() {
            cout << real << " + i" << imag << endl;
        }
};

// Run time Polymorphism
class base {
    public:
        virtual void print() {
            cout << "This is the base class's print function" << endl;
        }
        void display() {
            cout << "This is the base class's display function" << endl;
        }
};

class derived: public base {
    public:
        void print() {
            cout << "This is the derived class's print function" << endl;
        }
        void display() {
            cout << "This is the derived class's display function" << endl;
        }
};

int main() {
    // Function Overloading
    cout << "Function Overloading" << endl;
    A a;
    a.fun();
    a.fun(1);
    a.fun(2,3);

    cout << endl << endl; 

    // Operator Overloading
    cout << "Operator Overloading" << endl;
    Complex c1(12,7), c2(6,7);
    Complex c3 = c1+c2;
    c3.display();

    cout << endl << endl; 

    // Run Time Polymorphism
    cout << "Run Time Polymorphism" << endl;
    base *baseptr;
    derived d;
    baseptr = &d;
    baseptr -> print();
    baseptr -> display();
}
