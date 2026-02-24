// #include <iostream>
// using namespace std;
//
// class Animal {
// public:
//     virtual void sound() {
//         // Virtual Function
//         cout << "Animal makes a sound" << endl;
//     }
// };
//
// class Dog : public Animal {
// public:
//     void sound() override {
//         // Function Overriding
//         cout << "Dog makes a sound" << endl;
//     }
// };
//
// int main() {
//     Animal *a; // base class pointer
//     Dog d; // derived class object
//     a = &d;
//
//     a->sound(); // Runtime polymorphism
//     return 0;
// }


// ---------------------------------------------------------
//                       RUN TIME POLYMORPHISM

// It is a function that gets called is determined at runtime (not compile time).


// When a base class pointer points to a derived class object,
// and a virtual function is called —
// the derived class version executes (at runtime).