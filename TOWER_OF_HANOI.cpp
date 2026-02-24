// #include <iostream>
// using namespace std;
//
// void TowerofHanoi(int n, char source, char helper, char destination) {
//     if (n==1) {
//         cout<<"Move the Disk from " << source<< " to "<< destination <<endl;
//         return ;
//     }
//     TowerofHanoi(n-1, source, destination, helper);
//     cout<<"Move the " << n<< "th disk from "<< source << "to "<< destination <<endl;
//     TowerofHanoi(n-1, helper, source, destination);
// }
//
// int main() {
//
//     cout<<"Enter the number of disks: "<<" ";
//
//     int n;
//     cin>>n;
//
//     TowerofHanoi(n, 'A', 'B', 'C');
//
//     return 0;
// }