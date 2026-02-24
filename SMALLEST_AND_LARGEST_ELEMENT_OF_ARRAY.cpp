// // FIND THE SMALLEST /LARGEST IN ARRAY
//
// // SMALLEST:
//
// # include<iostream>
// using namespace std;
// int main() {
//     int num[6]={4,2,6,1,5,8};
//     int n=6;
//     int smallest = INT_MAX;
//     for (int i =0;i<n;i++) {
//         if (num[i]<smallest) {
//             smallest=num[i];
//         }
//     }
//     cout<<"Smallest element is: "<<smallest<<endl;
// }


// // OR:
//
//  #include <iostream>
// using namespace std;
// int main() {
//  int num[6]={5,15,22,1,-15,-24};
//  int smallest =INT_MAX;
//  for (int i=0;i<6;i++) {
//   smallest=min(num[i],smallest);
//  }
//  cout<<smallest<<endl;
// }



// // LARGEST:
//
//   #include <iostream>
//  using namespace std;
//  int main() {
//      int num[6]={5,15,22,100,-15,-24};
//   int largest=INT_MIN;
//      for (int i=0;i<6;i++) {
//          if (largest<num[i]) {
//              largest=num[i];
//          }
//      }
//      cout<<"largest: "<<largest<<endl;
// }


// // OR
//
//    #include <iostream>
//   using namespace std;
//   int main() {
//       int num[6]={5,15,22,100,-15,-24};
//       int largest=INT_MIN;
//       for (int i=0;i<6;i++) {
//           largest=max(num[i],largest);
//       }
//       cout<<"Largest: "<<largest<<endl;
//   }