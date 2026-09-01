#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

 int findMaxConsecutiveOnes(vector<int>& nums) {

    int count =0;   // make a count variable to counting the 1's
    vector<int> ans;   // make a ans vector ,to store the count of 1's before getting 0

    for(int i=0;i<nums.size();i++){
        if(nums[i]==1){
            count++;
        }else{
            ans.push_back(count);    // if we get 0, then push the count to the ans vector
            count=0;    // make the count again 0...
        }
    }

    ans.push_back(count);    // after loop ends ,always return the count to the ans vector, because it may happens,that the loop ends with 1...

    return *max_element(ans.begin(),ans.end());  // find the maximum count of 1's


}

int main() {

     vector<int> nums= {1,1,0,1,1,1};

     cout<<"Maximum number of consecutive 1's: "<<findMaxConsecutiveOnes(nums)<<endl;

     return 0;

}
