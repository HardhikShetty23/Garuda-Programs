/* This Program is written while learning OOPs concept. Since this program is getting larger and larger
       I am stopping continuing writing in this program. This program is written till INHERITANCE CONCEPT*/


#include <iostream>
#include <string>

using namespace std;

// class Teacher {

// private: 
//     double salary;
// public:
//     // Using CONSTRUCTOR && This is Non-Parameterized constructor
//     Teacher() {
//         dept = "Computer Science";
//     }

//     // Parameterized Constructor
//     Teacher (string name, string dept, string subject, double salary) {
//         this->name = name;
//         this->dept = dept;
//         this->subject = subject;
//         this->salary = salary;
//     }

//     // Properties / Attributes
//     string name;
//     string dept;
//     string subject;

//     // Custom Constructor 
//     Teacher ( Teacher &orgObj) {
//         cout<<"I am custom coyp constructor.. \n";
//         this->name = orgObj.name;
//         this->dept = orgObj.dept;
//         this->subject = orgObj.subject;
//     }
    

//     // Methods
//     void changeDept(string newDept) {
//         dept = newDept;
//     }

//     //Setter functions - Which Sets values for the private data 
//     void setSalary (double s) {
//         salary = s;
//     }

//     //Getter functions - Which gets/outputs values of the data stored as private
//     double getSalary () {
//         return salary;
//     }

//     void GetInfo() {
//         cout << "Name : " << name << endl;
//         cout << "Subject : " << subject << endl;
//     }
// };

// class Student {   // Not Inheritance concept!
// public:
//     string name;
//     double *cgpaPtr;
    
//     Student(string name, double cgpa) {
//         this->name = name;
//         cgpaPtr = new double;
//         *cgpaPtr = cgpa;
//     }

//     Student(Student &obj) {
//         this->name = obj.name;
//         cgpaPtr = new double;
//         *cgpaPtr = *(obj.cgpaPtr);
//     }

//     // Destructor 
//     ~Student() {
//         cout<<"Hey, I am destructor!";
//         delete cgpaPtr;
//     }

//     void getInfo() {
//         cout<<"Name = "<<name<<"  Cgpa = "<<(*cgpaPtr)<<endl;
//     }
// };

class Person {     // Inheritance Concept, Hybrid Inheritance.
public:
    string name;
    int age;

    // Paramerized Constructor
    Person(string name, int age) {
        this->name = name;
        this->age = age;
    }

    Person() {
        cout << "Hey, I am Parent Constructor.. \n";
    }

    ~Person() {
        cout << "Hey, I am Parent Destructor.. \n";
    }
};

// Hybrid Inheritance 
class _Student : public Person {
public:
    int rollno;

    void getInfo() {
        cout << "Name = " << name << endl;
        cout << "Age = " << age << endl;
        cout << "Rollno = " << rollno << endl;
    }

    _Student(string name, int age, int rollno) : Person(name, age) {
        this-> rollno = rollno;
    }

    _Student() {
        cout << "Hey, I am Child Constructor.. \n";
    }

    ~_Student() {
        cout << "Hey, I am Child Destructor.. \n";
    }
};

// Multi-Level Inheritance
class GradStudent : public _Student {
public: 
    string researchArea;
};

// Multiple Inheritance , Hybrid Inheritance 
class Teacher : public Person {
public: 
    string subject;
    double salary;
};

// Multiple Inheritance 
class TA : public Teacher, public _Student {

};

int main() {
    // Teacher t1("Shradha", "ComputerScience", "C++", 25000); 
    // // t1.name = "Shradha";
    // // t1.subject = "C++";
    // // t1.setSalary(25000);
    

    // // cout << t1.dept << endl;

    // //t1.GetInfo();

    // Teacher t2(t1);  // Custom Copy Constructor INVOKE
    // t2.GetInfo();

    // Student s1("Rahul Kumar", 8.9);
   

    // Student s2(s1);

    // s1.getInfo();
    // *(s2.cgpaPtr) = 9.2;
    // s2.name = "Neha Kumar";
    // s1.getInfo();
    // s2.getInfo();

    

    return 0;
}