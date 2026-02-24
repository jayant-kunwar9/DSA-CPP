// //                                               INSERTION IN MAX HEAP
//
// #include<iostream>
// using namespace std;
//
// class heap {
// public:
//     int arr[100];
//     int size;
//
//     heap() {
//         arr[0]=-1;
//         size=0;
//     }
//
//
//     void insert(int val) {
//         size=size+1;
//         int index=size;
//         arr[index]=val;
//
//         while (index>1) {
//             int parent =index/2;
//
//             if (arr[parent]<arr[index]) {
//                 swap(arr[parent],arr[index]);
//                 index=parent;
//             }else {
//                 return ;
//             }
//         }
//     }
//
// void print() {
//     for (int i=1;i<=size;i++) {
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }
//
//
//  //   Deleting a node(root) form heap
//
//     void deletefromheap() {
//         if (size==0) {
//             cout<<"Nothing to delete"<<endl;
//             return;
//         }
//
//         // step 1: put the last element into first index:
//         arr[1]=arr[size];
//
//         // step 2: remove last element:
//         size--;
//
//         //step 3: take root node to its correct position:
//         int i=1;
//         while (i<size) {
//             int leftIndex=2*i;
//             int rightIndex=2*i+1;
//             if (leftIndex<size&&arr[i]<arr[leftIndex]) {
//                 swap(arr[i],arr[leftIndex]);
//                 i=leftIndex;
//             }else if (rightIndex<size&&arr[i]<arr[rightIndex]) {
//                 swap(arr[i],arr[rightIndex]);
//                 i=rightIndex;
//             }else {
//                 return;
//             }
//         }
//     }
// };
//
//
// //   HEAPIFY
//
// void heapify(int arr[],int n,int i) {
//     int largest=i;
//     int leftIndex=2*i;
//     int rightIndex=2*i+1;
//
//     if (leftIndex<=n&& arr[largest]<arr[leftIndex]) {
//         largest=leftIndex;
//     }
//     if (rightIndex<=n&&arr[largest]<arr[rightIndex]) {
//         largest=rightIndex;
//     }
//
//     if (largest!=i) {
//         swap(arr[largest],arr[i]);
//         heapify(arr,n,largest);
//     }
// }
//
//
// // for heap sort
//
// void heapsort(int arr[],int n) {
//     int size =n;
//     while (size>1) {
//         swap(arr[size],arr[1]);
//         size--;
//
//         heapify(arr,size,1);
//     }
// }
//
// int main() {
//     heap h;
//     h.insert(50);
//     h.insert(55);
//     h.insert(53);
//     h.insert(52);
//     h.insert(54);
//
//     h.deletefromheap();
//     h.print();
//
//
//     // for heapify
//     int arr[]={-1,54,53,55,52,50};
//     int n=5;
//     for (int i=n/2;i>0;i--) {
//         heapify(arr,n,i);
//     }
//     cout<<"Printing the array now: "<<endl;
//     for (int i=1;i<=n;i++) {
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//
//     heapsort(arr,n);
//     cout<<"Printing the array now: "<<endl;
//     for (int i=1;i<=n;i++) {
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     return 0;
// }

//-----------------------------------------------------------------------------------------------------

// // Now , we can also use STL Library to make the Max_heap and Min_heap...    (using Priority Queue)
//
// #include<iostream>
// #include<queue>
// using namespace std;
//
// int main() {
//
// // This is for MAX_HEAP:
//
//     priority_queue<int> pq;
//
//     pq.push(10);
//     pq.push(15);
//     pq.push(20);
//     pq.push(5);
//     pq.push(40);
//     pq.push(50);
//
//     cout<<"Element at the top: "<< pq.top()<< endl;
//     pq.pop() ;
//     cout<<"Now , element at the top: "<<pq.top()<<endl;;
//
//     cout<<pq.size()<< endl<<endl<<endl;
//
//
//     // This is for MIN_HEAP:
//
//     priority_queue<int,vector<int>,greater<int>> minheap;
//
//     minheap.push(10);
//     minheap.push(15);
//     minheap.push(20);
//     minheap.push(5);
//     minheap.push(40);
//     minheap.push(50);
//
//     cout<<"Element at the top: "<<minheap.top()<<endl;
//     minheap.pop();
//
//     cout<<"Now , element at the top: "<<minheap.top()<<endl;
//
//     cout<<minheap.size()<<endl;
// }

