// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
//
// bool canEatAll(vector<int> & piles, int mid, int h ) {
//     int actualHours = 0;
//
//     for (int &x: piles) {   // x represents the numbers of bananas in a pile...
//         actualHours += x/mid;
//
//         if (x%mid!=0) {
//             actualHours++;
//         }
//     }
//     return actualHours<=h;
// }
//
//
// int minEatingSpeed(vector<int> & piles, int h) {
//     int n = piles.size();
//
//     int l =1;
//     int r = *max_element(begin(piles), end(piles));
//
//     while (l<r) {
//         int mid = l+(r-l)/2;   // per hour ;, i can eat mid number of Bananas...
//
//         if (canEatAll(piles, mid, h)) {
//             r=mid;
//         }else {
//             l =mid+1;
//         }
//     }
//     return l;
// }
//
//
// int main() {
//
//     vector<int> piles ={3,6,7,11};
//     int h =8;
//
//     cout<<" Minimum banana/hour she can eat to finish all the bananas within h hours: "<<minEatingSpeed(piles, h)<<endl;
//
//     return 0;
//
// }
