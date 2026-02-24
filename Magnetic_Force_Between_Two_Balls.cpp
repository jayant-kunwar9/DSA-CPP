// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
//
// bool canPlace(vector<int>& position, int m , int dist) {
//     int count =1;   // first ball placed
//     int lastPos = position[0];  // last ball on first place also
//
//     for (int i =0;i<position.size();i++) {
//         if (position[i]-lastPos>=dist) {
//             count++;
//             lastPos = position[i];
//         }
//     }
//     return count>=m;
// }
//
// int maxDistance(vector<int>& position, int m) {
//     sort(position.begin(), position.end());
//
//     int low =1;
//     int high = position.back()- position.front();
//
//     int ans =0;
//
//     while (low<=high) {
//         int mid = low+(high-low)/2;
//
//         if (canPlace(position, m, mid)) {
//             ans = mid ;   // possible
//             low = mid+1;   // try bigger force
//         }
//         else {
//             high = mid - 1 ;  //reduce force
//         }
//     }
//     return ans ;
// }
//
// int main() {
//
//     vector<int> position= {5,4,3,2,1,1000000000};
//
//     int m =2;
//
//     cout<<maxDistance(position, m);
//
//     return 0;
//
// }
