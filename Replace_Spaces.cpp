//
// //                                                Replacing   ( " " with @40)...
//
// //                                                    T(c) = O(n)
// //                                                    S(c) = O(n)  {  Because we created a new string from " " }
//
//
//
// #include <iostream>
// #include <algorithm>
// using namespace std;
//
// string replaceSpaces(string &str) {
//
//     string result ="";       // This is result string in which the answer string is stored  and this is the reason for O(n) space complexity
//
//     for (int i =0;i<str.length();i++) {
//              if (str[i]==' ') {
//                  result+="@40";         // if we have {" "} , just add  {@40}, into it ,    {we cannot use swapping here, because :
//                                                                                            // 1. " " and "@40" are literals, not variables.
//                                                                                            //  2. swap() requires same type variables.
//                                                                                            // 3. Even if it worked, it would only exchange values, not insert extra characters.
//              }else {
//                  result += str[i];                        // Else , just add the normal vales in the result string
//
//              }
//     }
//     return result;
//
// }
//
// int main() {
//
//    string str = "My Name Is Jayant";
//
//     cout<<replaceSpaces(str);
//
//     return 0;
// }
//
//
// //                   Try to remove the string result and store the string in str only and try to do it in O(1), space complexity...