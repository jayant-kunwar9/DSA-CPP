// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
//
// vector<vector<int>> merge(vector<vector<int>>& intervals) {
//
//     if(intervals.empty()){
//         return{};
//     }
//
//     // Sort intervals by start time so overlapping intervals come together...
//     sort(intervals.begin(), intervals.end());
//
//     // make a Answer vector to store the answer, so that at end all is returned at oncem, by just typing, return answer...
//     vector<vector<int>> answer;
//
//     // current stores the interval we are currently  bulilding/merging
//     vector<int> current= intervals[0];
//
//     // compare current interval with the next interval...
//     for (int i=0;i<intervals.size()-1;i++){
//         //  if current end >= next start, intervals overlap...
//         if(current[1]>=intervals[i+1][0]){
//
//             // Merge them:
//             // start = smaller start
//             // end = larger end
//             int start= min(current[0], intervals[i+1][0]);
//             int end= max(current[1], intervals[i+1][1]);
//
//             current= {start,end};
//         }
//
//
//         else{
//
//             // No overlap:
//             // current interval is finilized...
//
//             answer.push_back(current);
//
//             // Start a new current interval...
//
//             current = intervals[i+1];
//
//         }
//     }
//
//     // last current interval is still not stored , so push to the answer...
//     answer.push_back(current);
//
//     // return all merged intervals...
//     return answer;
//
// }
//
//
// int main() {
//
//     vector<vector<int>> intervals = {{1,3},{2,6},{8,10},{15,18}};
//
//    vector<vector<int>>result=merge(intervals);
//
//     for (int i = 0; i < result.size(); i++) {
//         cout<<"[" << result[i][0] << "," << result[i][1] << "]";
//     }
//
// return 0;
//
// }