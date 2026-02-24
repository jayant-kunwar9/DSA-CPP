// #include <iostream>
// using namespace std;
//
// int main() {
//     int n;
//     cin >> n;
//
//     int ans = 0;
//     for (int i = 1; i * i <= n; i++) {
//         ans = i;
//     }
//
//     cout << ans;
//     return 0;
//}
//-------------------------------------------------------------------------------------------------

// #include <iostream>
// using namespace std;
//
// int main() {
//     int n;
//     cin >> n;
//
//     int arr[n-1];
//     for (int i = 0; i < n-1; i++) {
//         cin >> arr[i];
//     }
//
//     int total = n * (n + 1) / 2;
//     int sum = 0;
//
//     for (int i = 0; i < n-1; i++) {
//         sum += arr[i];
//     }
//
//     cout << "Missing number = " << total - sum;
//     return 0;
// }

//---------------------------------------------------------------------------------------------------------------------

// #include <iostream>
// #include <stack>
// using namespace std;
//
// int main() {
//     string s;
//     getline(cin, s);
//
//     stack<string> st;
//     string word = "";
//
//     for (int i = 0; i < s.length(); i++) {
//         if (s[i] == ' ') {
//             st.push(word);
//             word = "";
//         } else {
//             word += s[i];
//         }
//     }
//     st.push(word);
//
//     while (!st.empty()) {
//         cout << st.top() << " ";
//         st.pop();
//     }
//
//     return 0;
// }

//------------------------------------------------------------------------------------------------------------------

// #include <iostream>
// using namespace std;
//
// int main() {
//     int n;
//     cin >> n;
//
//     if (n % 4 == 0)
//         cout << "Divisible by 4";
//     else
//         cout << "Not divisible by 4";
//
//     return 0;
// }

