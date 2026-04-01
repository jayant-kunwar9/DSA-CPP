// #include <iostream>
// #include <vector>
// using namespace std;
//
// int compress(vector<char>& chars) {
//
//     int count = 1;
//     int write = 0;   // where we write result
//
//     for (int i = 0; i < chars.size(); i++) {
//
//         if (i + 1 < chars.size() && chars[i] == chars[i+1]) {
//             count++;
//         }
//         else {
//             chars[write++] = chars[i];   // write character
//
//             if (count > 1) {
//                 string nw = to_string(count);
//                 for (char c : nw) {
//                     chars[write++] = c;   // write digits
//                 }
//             }
//
//             count = 1;
//         }
//     }
//
//     return write;
// }
//
// int main() {
//
//     vector<char> chars ;
//
//     chars = {'a','a','b','b','c','c','c'};
//
//     cout<<compress(chars);
//
//     return 0;
//
// }
