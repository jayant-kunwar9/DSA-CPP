#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int age;

    // Default constructor

    Student() {
        name="Unknown";
        age=0;
    }

    void display() {
        cout<<"Name: "<<name<<", Age: "<< age<<endl;
    }

};

