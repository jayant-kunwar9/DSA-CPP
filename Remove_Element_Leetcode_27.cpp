// #include <iostream>
// #include <vector>
// using namespace std;
//
// int removeElement(vector<int> & nums, int val) {
//     int k =0;     //    Points to the position where the next valid element  will be placed...
//
//     for (int i=0;i<nums.size();i++) {
//
//         // if current element is not equal to val, keep it in the array...
//
//         if (nums[i]!=val) {
//
//                       // copy valid element to index k...
//
//             nums[k]=nums[i];
//
//             // move k to the next position
//
//             k++;
//         }
//     }
//
// // k represent the number of elements that are not equal to val...
//
//     return k;
// }
//
// int main() {
//
//     vector<int> nums= {2,3,4,5,4,3};
//     int val = 3;
//
//     int k = removeElement(nums, val);
//
//     cout<<" Value that has been removed: "<<val<<endl<<endl;;
//
//     cout<<"Number of elements in the array after removing val: "<< k<<endl<<endl;
//
//     cout<<"Array after removing val: ";
//
//     for (int i=0;i<k;i++) {
//         cout<<nums[i]<<" ";    // this  part is not in leetcode, .. In leetcode, we only have to find the number of elements after removing val i.e k..
//     }
//
//     return 0;
//
// }
