// //                        SINGLE INHERITANCE
//
// #include <iostream>
// using namespace std;
//
// class Person {
// public:
//     string name;
//     int age;
//
// public:
//     Person() {
//         cout<<"Person Constructor"<<endl;
//     }
// };
//
// class Student: public Person {
// public :
//     int roll;
//
// public:
//     Student() {
//         cout<<"Student Constructor"<<endl;
//     }
//
//     void display() {
//         cout<<"Name: "<<name<<endl;
//         cout<<"Age: "<<age<<endl;
//         cout<<"Roll No: "<<roll<<endl;
//     }
// };
//
// int main() {
//     Student s1;
//     s1.name="jayant";
//     s1.age=20;
//     s1.roll=124;
//     cout<<s1.name<<endl;
//     cout<<s1.age<<endl;
//     cout<<s1.roll<<endl;
//     return 0;
// }

// -----------------------------------------------------------------------

// //                    MULTI - LEVEL INHERITANCE
//
// #include <iostream>
// using namespace std;
//
// class Person {
// public :
//     string name;
//     int age;
// };
//
// class Student : public Person {
// public:
//     int roll;
// };
//
// class Graduate: public Student {
// public:
//     string research_Paper;
// };
//
// int main() {
//     Graduate g1;
//     g1.name="Jayant";
//     g1.research_Paper="Quantum physics";
//     cout<<g1.name<<endl;
//     cout<<g1.research_Paper<<endl;
// }

// -----------------------------------------------------------------------------

// //                          MULTIPLE INHERITANCE
//
// #include <iostream>
// using namespace std;
//
// class Student {
// public:
//     string name;
//     int age;
//
// };
//
// class Teacher {
// public:
//     string subject;
//     float salary;
// };
//
// class TA: public Student, public Teacher {
//
// };
//
// int main() {
//     TA t1;
//     t1.name="Jayant";
//     t1.subject="Maths";
//     cout<<t1.name<<endl;
//     cout<<t1.subject<<endl;
//     return 0;
// }

// --------------------------------------------------------------------------

// //                        HIERARCHICAL INHERITANCE
//
// #include <iostream>
// using namespace std;
//
// class Person {
// public:
//     string name;
//     int age;
// };
//
// class Student: public Person {
// public:
//     int roll_no;
// };
//
// class Teacher: public Person {
// public :
//     float salary;
// };
//
// int main() {
//     Teacher t1;
//     t1.name="Jayant";
//     t1.salary=25000;
//     cout<<t1.name<<endl;
//     cout<<t1.salary<<endl;
//     return 0;
// }
