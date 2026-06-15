// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
//
// vector<vector<int>> threeSum(vector<int>& nums) {
//     vector<vector<int>> ans;
//     sort(nums.begin(), nums.end());   // sort the INPUT array
//
//     for(int i =0;i<nums.size();i++){     // first element is fixed
//         if(i>0 && nums[i]==nums[i-1])
//             continue;    // if (nums[i]==nums[i-1]), DONOT go down step, go again in loop and go one step, ahead, so that nums[i]!=nums[i-1]
//
//         int j= i+1;  // left
//         int k= nums.size()-1;  // right
//
//         while(j<k){
//             int sum = nums[i] + nums[j] + nums[k];  // finding the sum
//             if(sum<0){     // if sum is less than 0, we have to increase the sum, so increse the j as it is the LEFT part...
//                 j++;
//             }
//             else if(sum>0){    // if sum is greated than 0, we have to decrease the sum, so decrease the k as it is the RIGHT part...
//                 k--;
//
//             }
//             else{
//                 vector<int> temp = {nums[i], nums[j], nums[k]};
//                 ans.push_back(temp);    //  if we find the sum==0; store in the temp, and go for the next triplet...
//                 j++;
//                 k--;
//
//                 while(j<k && nums[j]==nums[j-1]) j++;   // if the current j and previous j are same, DONOT consider it , MOVE AHEAD, so that we get different 'J'
//                 while(j<k && nums[k]==nums[k+1]) k--;   // // if the current k and forward k are same, DONOT consider it , MOVE BACK, so that we get different 'K'
//             }
//         }
//
//     }
//     return ans;
// }
//
// int main() {
//
//     vector<int> nums= {-1,0,1,2,-1,-4};
//
//     vector<vector<int>> result = threeSum(nums);
//
//     for(int i = 0; i < result.size(); i++) {
//         cout << "[";
//
//         for(int j = 0; j < result[i].size(); j++) {
//             cout << result[i][j];
//
//             if(j < result[i].size() - 1)
//                 cout << ",";
//         }
//
//         cout << "] ";
//     }
//
//     return 0;
//
// }
//
//
