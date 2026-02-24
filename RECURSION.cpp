// //                                                      FACTORIAL
//
// #include <iostream>
// using namespace std;
//
// int factorial(int n) {
//     if (n==0) {
//         return 1;
//     }
//     return n* factorial(n-1);
// }
//
// int main() {
//     cout<<"Enter the number: ";
//     int n;
//     cin>>n;
//
//     int ans=factorial(n);
//     cout<<ans<<endl;
//
//     return 0;
// }

//----------------------------------------------------------------------------------------------------------------------------------------

// //                                                      2 TO THE POWER n code
//
// #include <iostream>
// using namespace std;
//
// int power(int n) {
//
//     if (n==0) {
//         return 1;
//     }
//     return 2*power(n-1);
// }
//
// int main() {
//     cout<<"Enter the value of n: "<<endl;
//     int n;
//     cin>>n;
//
//     int ans= power(n);
//     cout<<ans<<endl;
//
//     return 0;
// }

// ------------------------------------------------------------------------------------------------------------------------------------------

// //                                              PRINT COUNTING
//
// // It means if we print 5, then it gives: 5 4 3 2 1
//
// #include <iostream>
// using namespace std;
//
// void num(int n) {
//     if (n==0) {
//         return;
//     }
//     cout<<n<<" ";
//     num (n-1);
// }
//
// int main() {
//
//     cout<<"Enter a number: ";
//     int n;
//     cin>>n;
//
//     num(n);
//
//     return 0;
// }

// --------------------------------------------------------------------------------------------------------------------------------------

// //                                                            FIBONACCI SERIES
//
//
// #include <iostream>
// using namespace std;
//
// int fibbo(int n) {
//     if (n==0) {
//         return 0;
//     }
//     if (n==1) {
//         return 1;
//     }
//     return fibbo(n-1)+fibbo(n-2);
// }
//
// int main() {
//     cout<<"Enter a number: ";
//     int n;
//     cin>>n;
//
//     cout<<fibbo(n)<<endl;
//
//     return 0;
// }

// ----------------------------------------------------------------------------------------------------------------------------------

// //                                                         CLIMB STAIRS PROBLEM
//
// #include <iostream>
// using namespace std;
//
// int num(int n) {
//     if (n<0) {
//         return 0;
//     }
//     if (n==0) {
//         return 1;
//     }
//     return num(n-1) + num(n-2);
// }
//
// int main() {
//     cout<<"Enter the position: ";
//
//     int n;
//     cin>>n;
//
//     cout<<num(n)<<endl;
//
//     return 0;
// }


// ---------------------------------------------------------------------------------------------------------

// //                                                       SAY DIGITS
//
// // If i give 412, then it must be given , four one two in the output.....
//
// #include <iostream>
// using namespace std;
//
// void sayDigits(int n , string arr[]) {
//     if (n==0) {
//         return ;
//     }
//
//     int digits= n%10;
//     n=n/10;
//
//      sayDigits(n,arr);
//     cout<<arr[digits]<<" ";
// }
//
// int main() {
//
//     string arr[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
//
//     cout<<"Enter the Integer: "<<endl;
//
//     int n;
//     cin>>n;
//
//     sayDigits(n,arr);
//
//     return 0;
//
//
// }