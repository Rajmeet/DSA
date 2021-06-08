/*
ENCAPSULATION
Hiding the sensitive data from the user
 Example: In a car, the car manufacturer would want to hide the engine from the person buying it and not want them to know about all the woking of the car but only the end experience.


CLASS -> Data Members and Member functions
ACCESS MODIFIERS - Public, Private and Protected
Public    - Can be accessed from anywhere, even outside the class
Private   - Can be accessed only from within the class
Protected - Can be accessed from both within the class and the inherited class

Advantages of Encapsulation
- Good Coding practice
- Increases the security
*/


#include <iostream>
using namespace std;

class A{
    private:
        int b;
        void funcB() {
            cout << "Func B n"; 
        }
        
    public:
        int a;
        void funcA() {
            cout << "Func A \n";
        }    
    
    protected:
};

int main() {
    A obj;
    obj.funcA();
    // obj.funcB(); cannot be called since it is private
}