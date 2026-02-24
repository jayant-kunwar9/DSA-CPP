// // MULTIPLE INHERITANCE:
//
// #include <iostream>
// #include <string>
// using namespace std;
//
// // Base class 1: Person
// class Person {
// protected:
//     string name;
//     string address;
//     string city;
//     int age;
//
// public:
//     void getPersonDetails() {
//         getline(cin, name);
//         getline(cin, address);
//         getline(cin, city);
//         cin >> age;
//         cin.ignore(); // clear buffer after reading int
//     }
//
//     void showPersonDetails() {
//         cout << "Employee name: " << name << endl;
//         cout << "Address: " << address << endl;
//         cout << "City: " << city << endl;
//         cout << "Age: " << age << endl;
//     }
// };
//
// // Base class 2: Employee
// class Employee {
// protected:
//     int empId;
//     string department;
//
// public:
//     void getEmployeeDetails() {
//         cin >> empId;
//         cin.ignore();
//         getline(cin, department);
//     }
//
//     void showEmployeeDetails() {
//         cout << "Employee Id: " << empId << endl;
//         cout << "Department: " << department << endl;
//     }
// };
//
// // Derived class: Faculty (Multiple Inheritance)
// class Faculty : public Person, public Employee {
// private:
//     string subjects;
//     int teachingHrs;
//
// public:
//     void getFacultyDetails() {
//         getline(cin, subjects);
//         cin >> teachingHrs;
//     }
//
//     void showFacultyDetails() {
//         showPersonDetails();
//         showEmployeeDetails();
//         cout << "Subjects: " << subjects << endl;
//         cout << "Teaching hrs: " << teachingHrs << endl;
//     }
// };
//
// int main() {
//     Faculty f;
//
//     // Input order must match the test case
//     f.getPersonDetails();
//     f.getEmployeeDetails();
//     f.getFacultyDetails();
//
//     cout << "\n--- Faculty Details ---\n";
//     f.showFacultyDetails();
//
//     return 0;
// }
