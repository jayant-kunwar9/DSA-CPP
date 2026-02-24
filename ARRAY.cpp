// #include <iostream>
// using namespace std;
// int main() {
//     int marks[5]={34,68,78,87,22};
//     marks[3]=54; //We can also change the elemnts of array
//     cout<<marks[4]<<endl;
//     cout<<marks[3]<<endl;
//
//     cout<<sizeof(marks)<<endl;
//     // It give 20 because one int contain 4 bytes and we have total 5 array,thatswhy 20.
//
// // If we want the actual size of array then we have to :
//
//     cout<<sizeof(marks)/sizeof(int)<<endl;
// }

// ---------------------------------------------------

// // WE CAN RUN LOOPS IN ARRAY
//
// #include <iostream>
// using namespace std;
// int main() {
//     int marks[5]={1,2,3,4,5};
//     for (int i=0;i<5;i++) {
//         cout<<marks[i]<<endl;
//     }
// }


// -----------------------------------------------

// // // WE CAN TAKE INPUT IN ARRAY ASSIGNMENT:
// //
// //
// #include <iostream>
// using namespace std;
// int main() {
//     int marks[5];
//     cout<<"Numbers are: "<<endl;
//     for (int i=0;i<5;i++) {
//         cin>>marks[i];
//     }
//
//     for (int i=0;i<5;i++) {
//         cout<<marks[i]<<endl;
//     }
// }


//-----------------------------------------------------------------------------------------------------------------------

//                                             PRACTICE QUESTION

// 1. WAF to calculate Sum and Product of all elements in an Array.

// FOR SUM:

// #include <iostream>
// using namespace std;
//
// int main() {
//     int sum=0;
//     int num[4]={1,2,3,4};
//     for (int i=0;i<4;i++) {
//        sum+=num[i];
//     }
//     cout<<sum<<endl;
// }

// ---------------------------------------------

// // FOR PRODUCT:
//
//
// #include <iostream>
// using namespace std;
//
// int main() {
//     int product=1;
//     int num[4]={1,2,3,4};
//     for (int i=0;i<4;i++) {
//        product*=num[i];
//     }
//     cout<<product<<endl;
// }

//----------------------------------------------------------------------------------------------------------------

// // 2. WAF to swap the max & min number of an Array...
//
// #include<iostream>
// using namespace std;
// int main() {
//     int num[]={1,6,2,8,9};
//     int largest=INT_MIN;
//     int smallest=INT_MAX;
//     for (int i=0;i<5;i++) {
//         smallest=min(num[i],smallest);
//         largest=max(num[i],largest);
//     }
//     cout<<"Smallest element before Swap: "<<smallest<<endl;
//     cout<<"Largest element before Swap: "<<largest<<endl;
//
//     swap(smallest,largest);
//
//     cout<<"Smallest after Swap: "<<smallest<<endl;
//     cout<<"Largest after Swap: "<<largest<<endl;
//     return 0;
// }

//-----------------------------------------------------------------------------------------------------------------------

// // 3. WAF to print all the unique values in an Array...
//
// #include <iostream>
// using namespace std;
//
// void unique(int arr[], int size) {
//
//     for (int i=0;i<size;i++) {
//         int count=0;
//         for (int j=0;j<size;j++) {
//             if (arr[i]==arr[j]) {
//                 count++;
//             };
//         }
//         if (count==1) {
//             cout<<arr[i]<<" ";
//         }
//     }
//     }
// int main(){
//     int arr[5]={1,2,2,4,5,};
//     int size=5;
//     unique(arr,size);
// }

// ----------------------------------------------------------------------------------------------------------------------

// // 4. WAF to print intersection of 2 Arrays...
//
// #include <iostream>
// using namespace std;
// void intersection(int a[],int n,int b[], int m) {
//     for (int i=0;i<n;i++) {
//         for (int j=0;j<m;j++) {
//             if (a[i]==b[j]) {
//                 cout<<a[i]<<" ";
//                 break;
//             }
//         }
//     }
// }
// int main() {
//     int a[4]={1,2,3,4};
//     int n=4;
//     int b[4]={2,3,4,5};
//     int m=4;
//     intersection(a,4,b,4);
//     return 0;
//
// }

