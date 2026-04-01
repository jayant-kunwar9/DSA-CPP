//
// //                                                       T(c) = O(n square)
// //                                                       S(c) = O(1)
//
//
//
// #include<iostream>
//
// using namespace std;
//
// string removeSubstr(string s , string part) {
//
//     for (int i =0; i+part.length()<=s.length();i++) {    // loop (i+part.length()<=s.length()) so that s.length() - part.length() cannot be negative , if part.length > s.length...
//
//         if (i + part.length()<=s.length() && s.substr(i, part.length())==part) {   //  first condition is that, the current index and the length of part is smaller than string length and ,to find the substring of string s, to compare with part...
//             s.erase(i,part.length());     //  remove the part section
//             i=-1;     // after removing, restart checking from beginning
//         }
//     }
//     return s;
// }
//
// int main() {
//
//     string s = "daabcbaabcbc";
//
//     string part = "abc";
//
//     cout<< removeSubstr(s,part);
//
//     return 0;
//
// }
