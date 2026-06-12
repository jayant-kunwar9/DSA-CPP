// #include <iostream>
// using namespace std;
//
// int main() {
//     int num =5;
//
//     cout<<num<<endl;   // this is just for, formality, no need, because later we see the address of num...
//
//     cout<< "Address of num :"<< &num<<endl;    // just checking the address of num...
//
//     //-------------------------------------------POINTERS-----------------------------------------------------------
//
//     int *ptr= &num;
//
//     cout<<"Address of num: "<< ptr<<endl;;
//     cout<<"Value of num: "<< *ptr<<endl;
// }


//----------------------------------------------------BAD PRACTICE-------------------------------------------------------

// #include <iostream>
// using namespace std;
//
// int main() {
//
//     int *ptr;  // it is a bad practice (never do)
//
//     cout<<*ptr<<endl;
// }

//------------------------------------------------------Always initialize-----------------------------------------------

// #include<iostream>
// using namespace std;
//
// int main() {
//
//     int *ptr=0;
//
//     cout<<*ptr<<endl;     // generally it gives "SEGMENTED FAULT",... but sometimes it gives, nothhing,  (Both result come because 0 memory is not exists)...
// }


// //--------------------------------------------------CONFUSING SITUATION----------------------------------------------------
//
// #include<iostream>
// using namespace std;
//
// int main() {
//     int i =5;
//
//     int *p= &i;    // here initialization...
//
//     cout<<p<<endl;   // it gives the address of i, which is stored as value of p.....
//     cout<<*p<<endl;  // it gives the value of i......
//
//     int *q=0;
//     q=&i;    // here, de-referencing
//
//     cout<<q<<endl;  // same as p.....
//     cout<<*q<<endl;  // same as *p......
//
//     return 0;
// }

//---------------------------------------------------MORE CONFUSING TERM-------------------------------------------------

// #include<iostream>
// using namespace std;
//
// int main() {
//
//     // int num =6;
//     // int a =num;
//     // cout<<"Num before: "<<num<<endl;
//     // a++;
//     // cout<<"Num after: "<<num<<endl;
//
//
//     // Just same in the case of Pointer  as above example.......
//
//
//     // int num=6;
//     // int *ptr = &num;
//     // int a = *ptr;
//     // cout<<"num before: "<<num<<endl;
//     // a++;
//     // cout<<"num after: "<<num<<endl;
//
//
//     // BUT HERE, IF WE DO.....
//
//
//     // (*ptr)++;  // now num is also increment here...
//     // cout<<num<<endl;
// }

// //--------------------------------------------------COPYING A POINTER------------------------------------------------------
//
// #include<iostream>
// using namespace std;
//
// int main() {
//
//     int num =5;
//
//     int *p= &num;
//
//     int *q= p;   // copying a pointer....
//
//     cout<<p<<"-----"<<q<<endl;     // SAME
//     cout<<*p<<"-----"<<*q<<endl;    // SAME
//
//     return 0;
// }

// //-----------------------------------------POINTERS INCREMENT------------------------------------------------------------
//
// #include<iostream>
// using namespace std;
//
// int main() {
//  int i =3;
//
//  int *p=&i;
//
//  (*p)=(*p)+1;   // here normally edition happens...
//
//  cout<<i<<endl;
//
//  cout<<"Before p: "<<p<<endl;
//  p=p+1;
//  cout<<"After p: "<<p<<endl;   // it goes to next integer which is 4 BYTES ahead of it , so if num address is 100, it becomes 104.......
//
//  return 0;
// }
//
//
