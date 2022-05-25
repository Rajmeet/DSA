#include <string>
#include <iostream>
using namespace std;

class Student{ 
    // Data Members and these are private by default
    private:
        string name;
    public:
        // string name;
        int age;
        bool gender;

    // Default Constructor
    Student() = default;

    // Parameterised Constructor
    Student(string s, int a, int g) {
        name = s;   
        age = a;
        gender = g;
    }

    // Copy Constructor
    Student(Student &a) {
        name = a.name;
        age = a.age;
        gender= a.gender;
    }
    
    // Destructor
    ~Student() {
        cout << "Destructor Called" << endl;
    }

    // Setter
    void setName(string s) {
        name = s;
    }
    // Getter
    void getName() {
        cout << name << endl;
    }

    void printInfo() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Gender: " << gender << endl;
    }

    // Operator overloading
    bool operator == (Student & a) {
        if(name == a.name && age == a.age && gender == a.gender) return true;
        return false;
    }

};

int main() {
    Student a;
    a.setName("Test");
    a.age = 18;
    a.gender = 1;
    a.printInfo();

    Student B("Test2", 20, 0);
    B.printInfo();
}