// #include <iostream>
// using namespace std;
//
// void printHello() {
//     cout<<"hello";
// }
//
// // This is a method to define a function.
// // It always define outside the main function.
// // If the function doesnot return anything then we write void
// // Defining the function doesnot means that we print the thing which we write in the function..
// // The function will not print until we call it in the main function..
//

// int main() {
//     printHello();
// }


//----------------------------------------------

// // If we want to return something , then we have to write return type.
//
// #include <iostream>
// using namespace std;
//
// int printHello() {
//     cout<<"Hello\n";
//     return 3;
// }
//
//     int main(){
//         cout<<printHello();
//     cout<<endl;
//     }


//--------------------------------------------------

// We can also provide parameter in the function

// For examle :
// Write the  function of sum of two numbers..

// #include <iostream>
// using namespace std;
// int sum(int a,int b) {
//     return a+b;
// }
//
// int main() {
//     cout<<sum(3,5)<<endl;
// }



// Lets write the function of min of two numbers

// #include <iostream>
// using namespace std;
// int min(int a,int b) {
//     if (a<b) {
//         return a;
//     }
//         else {
//             return b;
//         }
//     }
//
//
// int main() {
//     cout<<min(5,3);
// }


//-----------------------------------------------------------------------

//   // Write the function to Calculate the sum of n numbers from 1 to n
//
// #include <iostream>
// using namespace std;
// int sum(int n) {
//   int sum=0;
//   for (int i=1;i<=n;i++) {
//     sum+=i;
//   }
//   return sum;
// }
//
// int main() {
//   cout<<sum(5);
//   return 0;
// }


//-------------------------------------------------------------------------

// // Write a function to calculate N factorial
//
//
// #include <iostream>
// using namespace std;
// int factorial(int n) {
//     int fact=1;
//     for (int i=1;i<=n;i++) {
//         fact*=i;
//     }
//     return fact;
// }
// int main() {
//     cout<<factorial(5);
// }


// -----------------------------------------------------------------


// // Calculate sum of digits of a number.
//
//
// #include <iostream>
// using namespace std;
// int main() {
//     int n;
//     cout<<"Enter a number: ";
//     cin>>n;
//     int digitsum=0;
//     while (n>0) {
//        int  lastdigit=n%10;
//         n=n/10;
//         digitsum+=lastdigit;
//     }
//     cout<<digitsum;
// }


// ----------------------------------------------------------------

// // Calculate nCr binomial coefficient for n & r
//
//
// #include <iostream>
// using namespace std;
// int factorial(int n) {
//     int a=1;
//     for (int i=1;i<=n;i++) {
//         a*=i;
//     }
//   return a;
// }
// int nCr(int n,int r) {
//     return factorial(n)/(factorial(r)*factorial(n-r));
// }
//
// int main() {
//     cout<<nCr(6,4);
//     return 0;
// }