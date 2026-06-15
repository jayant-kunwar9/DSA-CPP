#include<iostream>
using namespace std;

int main() {
    // //  1 . QUESTION..
    //
    //    int first = 8;
    //    int second =18;
    //    int *ptr = &second;
    //    second = 9;
    //    cout<< first <<" " <<second<<endl;
    //
    //    // Answer : 8 9,    firstly second is 18, then second is 9, so it changes to 9...


    // // 2. QUESTION
    //
    // int first = 6;
    // int *p=&first;
    // int *q=p;  // this *q also represent 6(first) only
    // (*q)++;
    // cout<<first<<endl;
    //
    // // Answer: 7


    // //  3. QUESTION
    //
    // int first= 8;
    // int *p = &first;
    // cout<< (*p)++<<" ";  // it is print first, since it is POST INCREMENT, so pehle value print hogi , baad main increment hoga...
    // cout<<first<<endl;   // after INCREMENT , first become 9;
    //
    // // ANSWER: 8 9


    // // 4. QUESTION
    //
    // int *p = 0;
    // int first = 110;
    // *p = first;  // this gives SEGMENTATION FAULT;This is called DEREFERENCING a null pointer, which results in undefined behavior
    // // // INSTEAD OF ABOVE LINE:
    // // p = &first; // this is correct
    // cout << *p << endl;
    //
    // //  ANSWER: SEGMENTAION FAULT


   // // 5. QUESTION
   //
   //  int first= 8;
   //  int second = 11;
   //  int *third = &second;
   //  first = *third;  // first got the vaule of second, i.e 11
   //  *third = *third+2;   // second is increased by 2 , i.e 13
   //  cout<<first<<" "<<second<<endl;
   //
   //  // ANSWER: 11 13


  // // 6. QUESTION
  //
  //   float f = 12.5;
  //   float p = 21.5;
  //   float *ptr= &f;
  //   (*ptr)++;   // value of f is incresed by 1  i.e 13.5
  //   *ptr= p;   // value of p is placed in the place of the value of f...
  //   cout<< *ptr<< " " <<f<< " "<<p<<endl;
  //
  //   // ANSWER: 21.5 21.5 21.5


  // // 7. QUESTION
  //
  //   int arr[5];
  //   int *ptr;
  //   cout<< sizeof(arr)<<" "<<sizeof(ptr)<<endl;  // size of arr : 4 byte each (SO, 4*5)= 20 bytes,,,,, size of ptr 8 bytes

 // ANSWER:  20 8


 // // 8. QUESTION
 //
 // int arr[]= {11,21,13,14};
 // cout<<*(arr) <<" "<< *(arr+1)<<endl;   // arr represent the first element of arr...
 //
 // // ANSWER:  11 21


 // // 9. QUESTION
 //
 // int arr[6]= {11,12,31};
 // cout<<arr<<" "<<&arr<<endl; // both will print the address of fisrt element of array...


 // // 10. QUESTION
 //
 // int arr[6] = {11, 21, 31};
 // int *p = arr;
 // cout << p[2] << endl;   //  it gives the value of 2nd index...
 //
 // // ANSWER: 31


 // // 11. QUESTION
 //
 // int arr[] = {11, 12, 13, 14, 15};
 // cout << *(arr) << " " << *(arr + 3);  // gives the value of first and 3rd index...
 //
 // // ANSWER: 11 14


 // // 12. QUESTION
 //
 // int arr[] = {11, 21, 31, 41};
 // int *ptr = arr++;  // it gives an error ,because we are trying to update arr, which is we are trying to manipulate the symbol table
 // cout << *ptr << endl;
 //
 // // Answer: ERROR


 // // 13. QUESTION
 //
 // char ch = 'a';
 // char* ptr = &ch;
 // ch++;   // update the ch from 'a' to 'b'
 // cout << *ptr << endl;
 //
 // // ANSWER: 'b'


 // // 14. QUESTION
 //
 // char arr[] = "abcde";
 // char *p = &arr[0];
 // cout << p << endl;   // in CHARACTER ARRAY ,it prints the entire character...
 //
 // // ANSWER: abcde


 // // 15. QUESTION
 //
 //
 // char arr[] = "abcde";
 // char *p = &arr[0];
 // p++;  // it starts from 'b', and prints upto null
 // cout << p << endl;
 //
 // // ANSWER: bcde


 // // 16. QUESTION
 //
 // char str[]= "babbar";
 // char *p = str;  // it represents the first elemet 'b'
 // cout << str[0] << " " << p[0] << endl;   // so it prints 'b' and 'b' (p[o]) also reprensts the first element
 //
 // // ANSWER: b b





}
