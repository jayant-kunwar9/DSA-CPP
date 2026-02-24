// #include<iostream>
// #include<vector>
// #include<unordered_set>
//
// using namespace std;
//
// int longestBalanced(vector<int> & nums) {
//     int n = nums.size();
//     int ans =0;
//
//     for (int i =0; i<n;i++) {
//
//         unordered_set<int> evenset;
//         unordered_set<int> oddset;
//
//         for (int j=i;j<n;j++) {
//             if (nums[j]%2==0) {
//                 evenset.insert(nums[j]);
//             }else {
//                 oddset.insert(nums[j]);
//             }
//             if (evenset.size()==oddset.size()) {
//                 ans = max(ans, j-i+1);
//             }
//         }
//     }
//     return ans;
// }
//
// int main() {
//
//     vector<int> nums = {2,5,4,3};
//
//     cout<<"Length of longest Balanced Subarray: "<<longestBalanced(nums)<<endl;
//
//     return 0;
//
// }
