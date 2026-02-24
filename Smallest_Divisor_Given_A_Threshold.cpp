// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
//
// int smallestDivisor(vector<int>& nums, int threshold) {
//
//     int low =1;
//     int high = *max_element(nums.begin(), nums.end());
//
//     while (low<=high) {
//         int mid= low+(high-low)/2;
//
//         long long sum =0;
//
//         for (int num:nums) {
//             sum+=(num+mid-1)/mid;   // ceil divisor
//         }
//
//         if (sum<=threshold) {
//             high = mid-1;   // try smaller divisor
//         }else {
//             low= mid+1;  // needs bigger divisor
//         }
//     }
// return low;
// }
//
//
// int main() {
//
//     vector<int> nums ={1,2,5,9};
//     int threshold = 6;
//
//     cout<<"Smallest Divisor such that the sum is less than or equal to threshold: "<<smallestDivisor(nums,threshold);
//
//     return 0;
// }
