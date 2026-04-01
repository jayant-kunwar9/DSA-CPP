//
// //                                                               T(C)= O(n)
// //                                                          S(C)= O(1)
//
//
// #include<iostream>
// using namespace std;
//
// void reverse(char s[], int n) {
//     int st =0;
//     int end = n-1;
//
//     while (st<end) {
//         swap(s[st],s[end]);
//             st++;
//             end--;
//         }
//     }
//
// int main() {
//
//     char s[]= "Jayant";
//     int n = 6;
//
//     reverse(s,n);
//
//     for (int i =0;i<n;i++) {
//         cout<<s[i]<<"";
//     }
//     return 0;
// }
