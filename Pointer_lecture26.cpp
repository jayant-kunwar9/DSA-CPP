// #include<iostream>
// using namespace std;
//
// int main() {
//
//     // int arr[10]={2,5,6};
//
//     // cout<<"1st. Address of First Memory Block: "<< arr<<endl;
//     //
//     // cout<<"2nd: "<<*arr<<endl;
//     //
//     // cout<<"3rd: "<<*arr+1<<endl;
//     //
//     // cout<<"4th: "<<*(arr+1)<<endl;
//     //
//     // cout<<"5th: "<<(*arr)+1<<endl;   // same result as 3rd...
//     //
//     // cout<<"6th: "<<*(arr)+1<<endl;  //same as 5th and 3rd...
//
//     // cout<<"7th: "<< (*)arr+1<<endl;   // this will give error, the de-reference operator must be followed by an expression...
//
//
//    //                                                    //   MORE PLAYING...
//    //
//    //  int arr[5]={23,122,41,67};
//    //
//    //  int i=3;
//    //
//    //  cout<<arr[i]<<endl;
//    //
//    //  cout<<*(arr+i)<<endl;    // both are same, we write arr[i], but internally it works like this: *arr(i+1)...
//    //
//    // //----------------------------------------------------------------------------------------------------
//    //  cout<<i[arr]<<endl;
//    //
//    //  cout<<*(i+arr)<<endl;  // this two also gives the same value...
//
//
//     //--------------------------------------------------------------------------------------------------------------------------
//
// //                                              DIFFERENCE BETWEEN ARRAY AND POINTER
//
// // //   1. SIZE
// //
// //     int arr[10]={1,2};
// //
// //     cout<<sizeof(arr)<<endl;
// //     cout<<"1st: "<<sizeof(*arr)<<endl;  // output:4  ,,... (*arr) is 2 and the size of it is 4 byte...
// //     cout<<"2nd: "<<sizeof(&arr)<<endl;  // output:8 ,,... arr is the first block and & this represents the address and the size of address is 8 bytes...
// //
// //
// //     int *ptr= &arr[0];
// //     cout<<sizeof(ptr)<<endl;
// //     cout<<"3rd: "<<sizeof(*ptr)<<endl;  // OUTPUT: 4 ;;; ptr represent the (address(address of first block of array)), so ot is of 8 bytes, now , it aksk (*ptr), so it gives only the address of first block, so ouput will be 4 bytes...
// //     cout<<"4th: "<<sizeof(&ptr)<<endl;  // OUTPUT: 8 ;;; same as the sizeof(ptr), tells the size of address...
//
// //------------------------------------------------------------------------------------------------------------------------
//
// //   2. & OPERATOR
//
//     int arr[10];
//
//     cout<<&arr[0]<<endl;
//
//
//     int *ptr= &arr[0];
//
//     cout<<&ptr<<endl;
//
//     // Both are different....
//
// }