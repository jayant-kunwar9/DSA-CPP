// // Print :
// // 1 2 3 4
// // 1 2 3 4
// // 1 2 3 4
// // 1 2 3 4



// #include <iostream>
// using namespace std;
// int main() {
// int n;
//     cout<<"Enter n: ";
//     cin>>n;
//     for (int i=1;i<=n;i++) {
//         for (int j=1;j<=n;j++) {
//             cout<<j<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// -------------------------------------------------

// // Print :
// // A B C D
// // A B C D
// // A B C D
// // A B C D


// #include <iostream>
// using namespace std;
// int main() {
// int n;
//     cout<<"Enter n: ";
//     cin>>n;
//     for (int i=1;i<=n;i++) {
//         char ch='A';
//         for (int j=1;j<=n;j++) {
//             cout<<ch<<" ";
//             ch+=1;
//         }
//         cout<<endl;
//     }
//     return 0;
// }


// ---------------------------------------------

// // Print :
// // 1 2 3
// // 4 5 6
// // 7 8 9


// #include <iostream>
// using namespace std;
// int main() {
//     int n;
//     cout<<"Enter n: ";
//     cin>>n;
//     int num=1;
//     for (int i=1;i<=n;i++) {
//         for (int j=1;j<=n;j++) {
//             cout<<num<<" ";
//             num++;
//         }
//         cout<<endl;
//     }
//     return 0;
// }



// --------------------------------------------

// // Print :
// // 1 2 3
// // 4 5 6
// // 7 8 9


// #include <iostream>
// using namespace std;
// int main() {
//     int n;
//     cout<<"Enter n: ";
//     cin>>n;
//     char ch='A';
//     for (int i=1;i<=n;i++) {
//         for (int j=1;j<=n;j++) {
//             cout<<ch<<" ";
//             ch++;
//         }
//         cout<<endl;
//     }
//     return 0;
// }


// ----------------------------------------------


// // Print :
// // *
// // * *
// // * * *
// // * * * *


// #include <iostream>
// using namespace std;
// int main() {
//     int n;
//     cout<<"Enter n: ";
//     cin>>n;
//     for (int i=1;i<=n;i++) {
//         for (int j=1;j<=i;j++) {
//             cout<<"*"<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }


// ---------------------------------------------

// // Print :
// // 1
// // 2 2
// // 3 3 3
// // 4 4 4 4


// #include <iostream>
// using namespace std;
// int main() {
//     int n;
//     cout<<"Enter n: ";
//     cin>>n;
//     for (int i=1;i<=n;i++) {
//         for (int j=1;j<=i;j++) {
//             cout<<i<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }



// ------------------------------------------------


// // Print :
// // A
// // B B
// // C C C
// // D D D D


// #include <iostream>
// using namespace std;
// int main() {
//     int n;
//     cout<<"Enter n: ";
//     cin>>n;
//     char ch='A';
//     for (int i=1;i<=n;i++) {
//         for (int j=1;j<=i;j++) {
//             cout<<ch<<" ";
//         }
//         cout<<endl;
//         ch++;
//     }
// }


// ---------------------------------------------

// // Print :
// // 1
// // 1 2
// // 1 2 3
// // 1 2 3 4


// #include <iostream>
// using namespace std;
// int main() {
//     int n;
//     cout<<"Enter n: ";
//     cin>>n;
//     for (int i=1;i<=n;i++) {
//         for (int j=1;j<=i;j++) {
//             cout<<j<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }



// ---------------------------------------------

// // Print :
// // 1
// // 2 1
// // 3 2 1
// // 4 3 2 1


// #include <iostream>
// using namespace std;
// int main() {
//     int n;
//     cout<<"Enter n: ";
//     cin>>n;
//     for (int i=1;i<=n;i++) {
//         for (int j=i;j>0;j--) {
//             cout<<j<<" ";
//         }
//         cout<<endl;
//     }
//   return 0;
// }

//                         Problem

// // Print :
// // A
// // B A
// // C B A
// // D C B A


// #include <iostream>
// using namespace std;
// int main() {
//     int n;
//     cout<<"Enter n: ";
//     cin>>n;
//     for (int i=1;i<=n;i++) {
//         char ch ='A'+(i-1);
//         for (int j=i-1;j>=0;j--) {
//             cout<<(char)(ch-j)<<" ";
//
//
//         }
//         cout<<endl;
//     }
//     return 0;
// }


// ------------------------------------------------------------------


// //       Floyd's Triangle Pattern
//
// // Print:
// // 1
// // 2 3
// // 4 5 6
// // 7 8 9 10
//
//
// #include <iostream>
// using namespace std;
// int main() {
//     int n;
//     cout<<"Enter n: ";
//     cin>>n;
//     int num=1;
//     for (int i=1;i<=n;i++) {
//         for (int j=1;j<=i;j++) {
//             cout<<num<<" ";
//             num++;
//         }
//         cout<<endl;
//     }
//     return 0;
// }


// Floyd,s trinagle pattern in characters

// A
// B C
// D E F
// G H I J


// #include <iostream>
// using namespace std;
// int main() {
//     int n;
//     cout<<"Enter n: ";
//     cin>>n;
//     char ch='A';
//     for (int i=1;i<=n;i++) {
//         for (int j=1;j<=i;j++) {
//             cout<<ch<<" ";
//             ch++;
//         }
//         cout<<endl;
//     }
//     return 0;
// }


// -------------------------------------------------------------------

//      Inverted Triangle Pattern

// Print :

// 1 1 1 1
//    2 2 2
//      3 3
//        4


// // In This Question we have to print space(" ") also..

// #include <iostream>
// using namespace std;
// int main() {
//     int n;
//     cout<<"Enter n: ";
//     cin>>n;
//     for (int i=1;i<=n;i++) {
//         for (int j=0;j>=(i-1);j++) {
//             cout<<" ";
//         }
//             for (int k=n;k>0;k--) {
//                 cout<<i;
//             }
//         cout<<endl;
//         }
//        return 0;
//     }
// ------------------------------------------------


