// #include <iostream>
// #include <vector>
// using namespace std;
//
// long long maxRunTime(int n, vector<int> & batteries) {
//     long long low =0;
//     long long high =0;
//
//     // upper bound = total battery time/n
//
//     for (int b: batteries) {
//         high+=b;
//     }
//     high/=n;
//
//     long long ans =0;
//
//     while (low<=high) {
//         long long mid = low+ (high-low)/2;
//
//         long long total = 0;
//
//         for (int b: batteries) {
//             total += min((long long) b,mid);
//         }
//
//         if (total>=mid*n) {
//             ans = mid;
//             low = mid +1;
//         }else {
//             high = mid-1;
//         }
//     }
//     return ans;
// }
//
// int main() {
//     vector<int> batteries={3,3,3};
//     int n =2;
//
//     cout<<maxRunTime(n,batteries)<<endl;
//
// }
