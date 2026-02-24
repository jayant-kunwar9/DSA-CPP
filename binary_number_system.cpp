// // Decimal to Binary
//
//
// #include <iostream>
// using namespace std;
// int main() {
//     int n;
//     cout<<"Enter n: ";
//     cin>>n;
//     int ans=0;
//     int power=1;
//     while (n>0) {
//         int rem=n%2;
//         n=n/2;
//         ans+=power*rem;
//         power*=10;
//     }
//     cout<<ans<<endl;
// }


// ---------------------------------------------------------


// // Binary to Decimal
//
//
// #include <iostream>
// using namespace std;
// int main() {
//     int n;
//     cout<<"Enter n: ";
//     cin>>n;
//     int ans=0;
//     int power=1;
//     while (n>0) {
//         int rem=n%10;
//         ans+=rem*power;
//         n=n/10;
//         power*=2;
//     }
//     cout<<ans<<endl;
// }
