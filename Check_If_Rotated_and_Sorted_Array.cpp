//
// //                                                      T(C)=O(n)
//
// #include<iostream>
// #include<vector>
// using namespace std;
//     bool check(vector<int>& nums) {
//
//         int n = nums.size();
//         int count = 0;  // This will count how many times order breaks
//
//
//         for(int i=0;i<n;i++){
//
//             //Compare current elements with next element
//             // (i+1) % n makes array circular
//             // So last element compare with first
//
//             if(nums[i]>nums[(i+1)%n]){
//                 count++;    // order break found
//             }
//         }
//
//         // For a sorted rotated array,
//         //there, can be at most ONE break
//
//         return count <=1;
//
//     }
//
//
// int main() {
//
//         vector<int> nums = {3,4,5,1,2};
//
//         cout<<boolalpha<<check(nums);
//
//
//         return 0;
// }