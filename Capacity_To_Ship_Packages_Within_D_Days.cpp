// #include<iostream>
// #include<vector>
// using namespace std;
//
// // Helper function: checks if shipping is possible
//
// bool canShip(vector<int>& weights, int days, int capacity){
//     int dayCount=1;
//     int currentLoad=0;
//
//     for(int w : weights){
//         if(currentLoad + w <= capacity){
//             currentLoad += w;
//         }else{
//             dayCount++;
//             currentLoad = w;
//         }
//     }
//     return dayCount <= days;
// }
//
// int shipWithinDays(vector<int>& weights, int days) {
//     int low = *max(weights.begin(), weights.end());
//     int high =0;
//
//     for (int w:weights){
//         high+=w;
//     }
//
//     int answer = high;
//
//     while(low<=high){
//         int mid = low+(high-low)/2;
//         if(canShip(weights,days,mid)){
//             answer=mid;   // possible answer
//             high=mid-1;   // try smaller capacity
//         }else{
//             low =mid+1;   // need bigger capacity
//         }
//     }
//     return answer;
//
// }
//
//
// int main() {
//
//     vector<int> arr ={1,2,3,4,5,6,7,8,9,10};
//          int days = 5;
//
//     cout<<shipWithinDays(arr,days);
//
// }
