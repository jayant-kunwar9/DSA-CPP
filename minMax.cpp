// #include <bits/stdc++.h>
// using namespace std;
//
// // #define int long long
// #define endl '\n'
//
// using ll = long long;
// using pii = pair<int, int>;
// using vi = vector<int>;
// using vll = vector<ll>;
//
// const int INF = 1e9;
// const ll LINF = 1e18;
// const int MOD = 1e9 + 7;
//
// // Fast I/O
// void fastIO() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
// }
//
//
// int main() {
//     fastIO();
//
//     int T;
//     cin >> T;
//
//     while (T--) {
//
//         int n;
//         cin>>n;
//
//         vector<int>a(n);
//
//         int zero=0,one=0;
//         for(auto& x:a)
//         {
//             cin>>x;
//
//             if(x==0) zero++;
//             else one++;
//         }
//
//
//
//         /*
//
//         B moves first and does : replace two ajacent elements with max bw them
//         While E replaces gthem with smaller number
//
//         B wins if final element is 1  else E wins
//
//
//         Game lasts for n-1 rounds -> each player will have n-1/2 rounds
//
//         if n-1 %2 != 0 -> B will have one more round than E
//
//
//
//         if n is odd -> BOth will have similar number of rounds
//         if n is even -> B will have one more round than E
//
//
//         */
//
//         if(zero > one)
//         {
//             cout<<"Elsie"<<'\n';
//             continue;
//         }
//
//         else if(one >= zero)
//         {
//             cout<<"Bessie"<<'\n';
//             continue;
//         }
//     }
//
//     return 0;
// }
//
//
//
// // 1 0 1 0 1
//
