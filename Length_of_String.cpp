//
// //                                                      T(C)= O(n)
// //                                                  S(C)= O(1)
//
//
//
// #include<iostream>
// using namespace std;
//
// int getLength(char name[]) {
//     int count=0;
//
//     for (int i=0;name[i]!='\0';i++) {          //  Condition: Iteration continues, until we get the NULL index...
//         count++;
//     }
//     return count;
// }
//
// int main() {
//
//     char name[20];
//     cout<<"Enter your Name: "<<endl;
//
//     cin>>name;
//
//     cout<<"Length of your Name is: "<<getLength(name);
//
//     return 0;
//
// }