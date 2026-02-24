
// // 1.
//
// #include <iostream>
// using namespace std;
//
// int main() {
//     int arr[] = {4, 8, 2, 6, 7};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     int max1, max2;
//     if (arr[0] > arr[1]) {
//         max1 = arr[0];
//         max2 = arr[1];
//     } else {
//         max1 = arr[1];
//         max2 = arr[0];
//     }
//
//     for (int i = 2; i < n; i++) {
//
//         if (arr[i] > max1) {
//             max2 = max1;
//             max1 = arr[i];
//         }
//         else if (arr[i] > max2) {
//             max2 = arr[i];
//         }
//     }
//     cout << "Maximum product = " << (max1 * max2) << endl;
//
//     return 0;
//}

//----------------------------------------------------------------------------------------------------------------------

// 2.
//
// #include <iostream>
// using namespace std;
//
// int main() {
//     int n;
//     cout << "Enter a number: ";
//     cin >> n;
//
//     for (int i = 2; i * i <= n; i++) {
//         if (n % i == 0) {
//             cout << i << " ";
//
//
//             while (n % i == 0) {
//                 n = n / i;
//             }
//         }
//     }
//
//
//     if (n > 1) {
//         cout << n;
//     }
//
//     return 0;
// }

// // 3.---------------------------------------------------------------------------------------------------------------
//
//
// #include <iostream>
// using namespace std;
//
// int q[5], front = -1, rear = -1;
//
// void enqueue(int x) {
//     if (rear == 4)
//         cout << "Overflow\n";
//     else {
//         if (front == -1) front = 0;
//         q[++rear] = x;
//         cout << x << " inserted\n";
//     }
// }
//
// void dequeue() {
//     if (front == -1 || front > rear)
//         cout << "Underflow\n";
//     else
//         cout << q[front++] << " deleted\n";
// }
//
// int main() {
//     enqueue(10);
//     enqueue(20);
//     enqueue(30);
//
//     dequeue();
//     dequeue();
//
//     return 0;
// }

