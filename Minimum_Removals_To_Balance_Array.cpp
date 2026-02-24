// #include<iostream>
// #include<algorithm>
// #include<vector>
// using namespace std;
//
// int minRemovals(vector<int>& nums , int k) {
//     int n = nums.size();
//     sort(nums.begin(),nums.end());
//
//     int maxWindow =1;
//     int l=0;
//
//     for (int r=0;r<n;r++) {
//         while ((long long) nums[r]>(long long)nums[l]*k){
//
//             l++;
//         }
//         maxWindow = max(maxWindow, r-l+1);
//     }
//     return n-maxWindow;
// }
//
//
//
// int main() {
//
//     vector<int> nums = {1,6,2,9};
//
//     int k = 3;
//
//     cout<<"Minimum Numbers to Remove: "<<minRemovals(nums, k)<<endl;
//
// }
