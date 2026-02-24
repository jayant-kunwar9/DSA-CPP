// //                          DEFAULT CONSTRUCTOR:
//
// #include <iostream>
// using namespace std;
//
// class Student {
// public:
//     string name;
//     int age;
//
//     // Default constructor
//
//     Student() {
//         name="Unknown";
//         age=0;
//     }
//
//     void display() {
//         cout<<"Name: "<<name<<", Age: "<< age<<endl;
//     }
//
// };
//
// int main() {
//     Student s1;
//     s1.display();
//     return 0;
// }

// -------------------------------------------------------------------

// //                      PARAMETRIZED CONSTRUCTOR
//
// #include <iostream>
// using namespace std;
//
// class Student {
// public:
//     string name;
//     int age;
//
// public :
//     Student(string n, int a) {
//
//     name =n;
//     age=a;
//
// }
//
//     void display() {
//     cout<<"Name: "<<name<<", Age: "<<age<<endl;
// }
// };
//
// int main() {
//     Student s1("Jayant", 20);
//     s1.display();
//     return 0;
// }

// ---------------------------------------------------------------------------

// //                          COPY CONSTRUCTOR
//
// #include <iostream>
// using namespace std;
//
// class Student {
// public :
//     string name;
//     int age;
//
//
// public :
//     Student(string n, int a) {   // Parameterized constructor
//     name =n;
//     age=a;
// }
//
// public:
//     Student(const Student & obj) {    //COPY Constructor
//         name=obj.name;
//         age=obj.age;
//     }
//
//     void display() {
//         cout<<"Name: "<<name<<", Age: "<<age<<endl;
//     }
// };
//
// int main() {
//     Student s1("Jayant", 20);
//     Student s2(s1);
//     s1.display();
//     s2.display();
//     return 0;
//
// }

//-------------------------------------------------------------------------

// //                            THIS POINTER
//
// #include <iostream>
// using namespace std;
//
// class Student {
// public:
//     string name;
//     int age;
//
// public :
//     Student(string name, int age) {
//     this->name=name;
//     this->age=age;
// }
//
//     void display() {
//     cout<<"Name: "<<name<<", Age: "<<age<<endl;
// }
// };
//
// int main() {
//     Student s1("Jayant",20);
//     s1.display();
//     return 0;
// }
