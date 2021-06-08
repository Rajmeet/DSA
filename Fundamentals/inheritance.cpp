/*
INHERITANCE
- Derived Class (child)  - class inherits from the other class
- Parent Class  (parent) - class being inherited from

Types of Inheritance
- Single 
    Class B inherits from Class A

- Multiple
    Class C inherits from Class A and Class B

- Multi level
    Class C inherits from Class B and Class B inherits from Class A

- Hybrid
    Multilevel and Multiple Inheritance
    Class D inherits from Class B and Class C and Class B inherits from Class A and hence Class D inherits from Class A, Class B, and Class C

- Hierarchical
    A complete structure is sort of created by multiple level of inheritance
*/

#include <iostream>
using namespace std;

class A {
    public:
        void Afunc() {
            cout << "Inherited from A";
        }
};
class B{
    public:
        void BFunc() {
            cout << "Inherited from B"; 
        }
    
};
class C : public A, public B{
    public:
};


int main() {
    C c;
    c.BFunc();
    c.Afunc();
}