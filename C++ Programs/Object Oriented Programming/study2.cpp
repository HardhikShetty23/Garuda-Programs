/* This Program is continuation of the the study.cpp . This program starts from Polymorphism concept*/

#include <iostream>
#include <string>

using namespace std;

// Function Overloading 
class Print {
public:
    void show ( int x ) {
        cout << "int : " << x << endl;
    }

    void show ( char ch ) {
        cout << "char : " << ch << endl;
    }
};


// Constructor Overloading 
class Student {
public: 
    string name;

    Student() {
        cout << "Non-parameterized Constructor\n";
    }

    Student(string name) {
        this->name = name;
        cout << "Name = " << name << endl;
        cout << "Parameterized\n";
    }
};

int main() {
    Print p1;

    p1.show('&');

    return 0;
}