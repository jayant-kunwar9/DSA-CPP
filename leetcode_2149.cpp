// #include<iostream>
// #include<vector>
// using namespace std;
//
// vector<int> rearrangeArray(vector<int>& nums) {
//     vector <int> positive;   // separating positive integers...
//     vector <int> negative;   // separating negative integers...
//     vector <int> ans;       // ans vector, for pushing the positive and negative integer at the end...
//
//     for(int i=0;i<nums.size();i++){
//         if(nums[i]>=0){
//             positive.push_back(nums[i]);
//         }else{
//             negative.push_back(nums[i]);
//
//         }
//     }
//
//     for(int i =0;i<positive.size();i++){
//         ans.push_back(positive[i]);    // throwing stored positive number
//         ans.push_back(negative[i]);     // throwing stored negative number
//     }
//
//     return ans;    // returning ans vector...
//
//
// }
//
// int main() {
//
//     vector<int> nums = {3, 1, -2, -5, 2, -4};
//
//     vector<int> result = rearrangeArray(nums);
//
//     for(int i = 0; i < result.size(); i++) {
//         cout << result[i] << " ";
//     }
//
//     return 0;
//
// }