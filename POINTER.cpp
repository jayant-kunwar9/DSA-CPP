// #include<iostream>
// using namespace std;
//
// int main() {
//     int a =10;
//     int* ptr= &a;
//
//     cout<<ptr<<endl;
//     cout<<&a<<endl;  // here, both, PTR AND &A is equal, because , both represent addresses of a.
//
//     cout<<&ptr<<endl;  // this represent address of ptr
//
//     // now if we have to store the address of pointer ( POINTER TO POINTER):
//
//     int b =100;
//     int* ptr1 = &b;
//
//     int** ptr2 = &ptr1;
//
//     cout<<&ptr1<<endl;
//     cout<<ptr2<<endl;
//
//     return 0;
// }

//-------------------------------------------------------------------------------------------------------

// //                                             DEREFRENCING THE POINTER (VALUE AT ADDRESS)
//
// #include <iostream>
// using namespace std;
//
// int main() {
//
//     int n=10;
//
//     int* ptr = &n;
//     cout<<*(&n)<<endl;
//     cout<<*ptr<<endl;
//
//     int** ptr2 = &ptr;
//     cout<<**ptr2<<endl;
//
//     return 0;


//------------------------------------------------------------------------------------------------------

// //                                                    PASS BY REFERENCE  (POINTERS)
//
// #include<iostream>
// using namespace std;
//
// void changeA(int *ptr) {
//     *ptr =20;
// }
//
// int main() {
//     int n=10;
//
//     cout<<n<<endl;
//
// }

//---------------------------------------------------------------------------------------------------------

// //                                                    PASS BY REFERENCE (ALIAS)
//
// # include <iostream>
// using namespace std;
//
// void changeX(int &b) {
//     b=20;
// }
//
// int main() {
//
//     int a =10;
//
//     changeX(a);
//     cout<<a<<endl;
//
//     return 0;
// }


