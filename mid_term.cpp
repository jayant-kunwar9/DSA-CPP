// #include <iostream>
// using namespace std;
// int main() {
//     cout<<"hello";
//     cout<<endl;
// }

// -----------------------------------------------------

// //                          TRAVERSAL:
//
// #include <iostream>
// using namespace std;
// int main() {
//     int arr[]={10,20,30,40,50};
//     int n=5;
//     cout<<"Traversal Array: ";
//     for (int i=0;i<n;i++) {
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }

// -------------------------------------------------------------

// //                                     INSERTION:
//
// #include <iostream>
// using namespace std;
// int main() {
//     int arr[10]={10,20,30,40,50};
//     int n=5;
//     int pos=2;
//     int x=99;
//
//     for (int i=n;i>pos;i--) {
//         arr[i]=arr[i-1];
//
//     }
//
//     arr[pos]=x;
//
//     n++;
//
//     for (int i=0;i<n;i++) {
//         cout<<arr[i]<<" ";
//
//     }
//
//     return 0;
//
// }

// -------------------------------------------------------------------

// //                              DELETION
//
// #include <iostream>
// using namespace std;
//
// int main() {
//     int arr[10]={10,20,30,40,50};
//     int n=5;
//     int pos=3; //   I want 40 to be deleted....
//     for (int i=pos;i<n-1;i++) {
//         arr[i]=arr[i+1];  //shift element left
//     }
//     n--; //size decreses after deletion
//
//     cout<<"Array after deletion: ";
//     for (int i=0;i<n;i++) {
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }

// -------------------------------------------------------------------------

//                                        RECURSION

// // Print 4 to 1 numbers using recursion:
//
// #include <iostream>
// using namespace std;
//
// void printNumbs(int n) {
//
//     if (n==1) {
//         cout<<"1"<<endl;
//         return;
//     }
//     cout<<n<<" ";
//     printNumbs(n-1);
// }
//
// int main() {
//     printNumbs(5);
//     return 0;
// }

// -----------------------------------------------------------------

//  //                                          N FACTORIAL USING RECURSION
//
// #include <iostream>
// using namespace std;
//
// int fact(int n) {
//  if (n==0 or n==1) {
//   return 1;
//  }
//  else {
//   return n*fact(n-1);
//  }
//
// }
// int main() {
// cout<<"Enter a Number: ";
//  cout<<fact(5);
// }

// ----------------------------------------------------------------------------

// //                                  FIBONACCI SERIES USING REACURSION:
//
// #include <iostream>
// using namespace std;
//
// int fibbo(int n) {
//
//     if (n==0) {
//         return 0;
//     }
//     if (n==1) {
//         return 1;
//     }
//     return fibbo(n-1)+fibbo(n-2);
//
// }
// int main() {
//     int n=6;
//     for (int i=0;i<n;i++) {
//         cout<<fibbo(i)<<" ";
//     }
//     return 0;
// }


// ---------------------------------------------------------------------------

// //                              Linear Search
//
// #include <iostream>
// using namespace std;
//
// int linear(int arr[], int size , int target) {
//     for (int i=0;i<size;i++) {
//         if (arr[i]==target) {
//             return i;
//         }
//     }
//     return -1;
// }
// int main() {
//     int arr[]={54,78,45,34,98};
//     int size=5;
//     int target=45;
//     cout<<linear(arr,size,target)<<endl;
// }

// ----------------------------------------------------------------------

// //                                          Binary Search:
//
// #include <iostream>
// using namespace std;
//
// int binary(int arr[],int n,int key){
//     int s=0;
//     int e=n;
//     while (s<=e) {
//         int mid=(s+e)/2;
//         if (arr[mid]==key) {
//             return mid;
//         }
//         else if(arr[mid]<key) {
//             s=mid+1;
//         }
//         else {
//             e=mid-1;
//         }
//     }
//     return -1;
// }
// int main() {
//
//     int n=6;
//     int key=76;
//     int arr[n]={34,39,56,76,87,99};
//     cout<<binary(arr,n,key);
//     return 0;
// }

// ----------------------------------------------------------------------------------------------

// //                                            Tower Of Hanoi:
//
// #include <iostream>
// using namespace std;
//
// void tower(int n, char source , char helper, char destination) {
//     if (n==1) {
//         cout<<"Move disk 1 from "<<source<<" to "<<destination<<endl;
//         return;
//     }
//     tower(n-1,source ,destination,helper);
//     cout<<"Move disk "<<n<<" from "<< source <<" to "<<destination<<endl;
//
//     tower(n-1,helper, source, destination);
// }
// int main() {
//     int n=3;
//     tower(n,'A','B','C');
//     return 0;
// }

//---------------------------------------------------------------

// //                              Bubble Sorting
//
// #include <iostream>
// using namespace std;
//
// void bubble(int arr[],int n) {
//     for (int i=0;i<n-1;i++) {
//         bool isSwap=false;
//         for (int j=0;j<n-i-1;j++) {
//             if (arr[j]>arr[j+1]) {
//                 swap(arr[j],arr[j+1]);
//                 isSwap=true;
//             }
//         }
//         if (!isSwap) {
//             return ;
//         }
//     }
// }
// int main() {
// int arr[]={4,5,2,1,3};
//     int n=5;
//     bubble(arr,n);
//
//     cout<<"Sorted Array: ";
//     for (int i=0;i<n;i++) {
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }

// -----------------------------------------------------------------

// //                              Selection Sort:
//
// #include <iostream>
// using namespace std;
//
// void selection(int arr[], int n) {
//     for (int i=0;i<n-1;i++) {
//         int min=i;
//         for (int j=i+1;j<n;j++) {
//             if (arr[j]<arr[min]) {
//                 min=j;
//             }
//         }
//         swap(arr[i],arr[min]);
//     }
// }
// int main() {
//     int arr[]={4,5,2,1,3};
//     int n=5;
//     selection(arr,n);
//     cout<<"Sorted Array: ";
//     for (int i=0;i<n;i++) {
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }

// -------------------------------------------------------

// //                               Insertion Sort:
//
// #include <iostream>
// using namespace std;
//
// void insertion(int arr[],int n) {
//     for (int i=1;i<n;i++) {
//         int curr=arr[i];
//         int prev=i-1;
//
//         while (prev>=0 && arr[prev]>curr) {
//             arr[prev +1]=arr[prev];
//             prev --;
//         }
//         arr[prev +1]=curr;
//     }
// }
// int main() {
//     int arr[]={5,2,1,4,3};
//     int n=5;
//     insertion(arr,n);
//     cout<<"Sorted Array: ";
//     for (int i=0;i<n;i++) {
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }

// -------------------------------------------------------------------------

// //                                    Pointers
//
// #include <iostream>
// using namespace std;
// int main() {
//     int a=5;
//     int *ptr=&a;
//     cout<<ptr<<endl;
//
//     int** parptr=&ptr;
//     cout<<&ptr<<endl;
//     cout<<parptr<<endl;
// }

// ----------------------------------------------------------------------------

//                          // NULL POINTER
//
// #include <iostream>
// using namespace std;
// int main() {
//     int* ptr=NULL;
//     cout<<ptr<<endl;
// }

// ---------------------------------------------------------------

// //                                    EXAMPLE
//
// #include <iostream>
// using namespace std;
// int main() {
//     int a=5;
//     int* p=&a;
//     int** q=&p;
//
//     cout<<*p<<endl;
//     cout<<**q<<endl;
//     cout<<p<<endl;
//     cout<<*q<<endl;
// }


// -----------------------------------------------------------------------
//                                       STACK

// //   1. Implementation of Stack using Vector .....
//
// #include <iostream>
// #include <vector>
// using namespace std;
//
// class Stack {
//
//     vector <int> v;
// public :
//     void push (int val) {
//     v.push_back(val);
// }
//
//     void pop() {
//     v.pop_back();
// }
//
//     int top() {
//     return v[v.size()-1];
// }
//
//     bool empty() {
//     return v.size()==0;
// }
// };
//
// int main() {
//     Stack s;
//     s.push(10);
//     s.push(20);
//     s.push(30);
//
//     while (!s.empty()) {
//         cout<<s.top()<<" ";
//         s.pop();
//     }
//     cout<<endl;
//     return 0;
// }


//     // 2. Implementation of Stack using Linked list .....
//
// #include <iostream>
// #include <list>
// using namespace std;
//
// class Stack {
//
//     list<int> ll;
// public:
//
//     void push( int val) {
//         ll.push_front(val);
//     }
//
//     void pop() {
//         ll.pop_front();
//     }
//
//     int top() {
//         return ll.front();
//     }
//
//     bool empty() {
//         return ll.size()==0;
//     }
// };
//
// int main() {
//
//     Stack s;
//     s.push(10);
//     s.push(20);
//     s.push(30);
//     while (!s.empty()) {
//         cout<<s.top()<<" ";
//         s.pop();
//     }
//     cout<<endl;
//     return 0;
// }

// //   3. Implementation of Stack using <stack> which actually used in cpp .....
//
// #include <iostream>
// #include <stack>
// using namespace std;
//
// int main() {
//
//     stack<int> s;
//     s.push(10);
//     s.push(20);
//     s.push(30);
//
//     while (!s.empty()) {
//         cout<<s.top()<<" ";
//         s.pop();
//     }
//     cout<<endl;
//     return 0;
// }

// ------------------------------------------------------------------------------

// //                            Reverse a string using Stack
//
// #include <iostream>
// #include <stack>
// using namespace std;
// int main() {
//
//     string str;
//     cout<<"Enter a string: ";
//     cin>>str;
//
//     stack<char> st;
//     for (int i=0;i<str.size();i++) {
//         char ch= str[i];
//         st.push(ch);
//     }
//
//     string reverse=" ";
//     while (!st.empty()) {
//         reverse+=st.top();
//         st.pop();
//     }
//     cout<<reverse;
//     return 0;
// }

// --------------------------------------------------------------------------------------


// //                                       QUEUE
//
// #include <iostream>
// #include <queue>
// using namespace std;
// int main() {
//     queue<int> q;
//
//     q.push(10);
//     q.push(20);
//     q.push(30);
//
//     cout<<"Front element: "<<q.front()<<endl;
//     cout<<"Back element: "<<q.back()<<endl;
//
//     q.pop();
//
//     cout<<"After pop, front element: "<<q.front()<<endl;
//
//     cout<<"Queue elements: ";
//     while (!q.empty()) {
//         cout<<q.front()<<" ";
//         q.pop();
//     }
//
//     return 0;
// }

// -------------------------------------------------------------------

// //                                           INFINIX TO POSTFIX:
//
// #include <iostream>
// #include <stack>
// using namespace std;
//
// int prec(char c) {
//     if (c=='^') {
//         return 3;
//     }
//
//     else if (c=='*'||c=='/') {
//         return 2;
//     }
//     else if (c=='+'||c=='-') {
//         return 1;
//     }
//     else {
//         return -1;
//     }
// }
//
// string infinixtopostfix(string st) {
//
//     stack<char> s;
//     string res;
//     for (int i=0;i<st.length();i++) {
//         if ((st[i]>='a'&&st[i]<='z')||(st[i]>='A'&&st[i]<='Z')) {
//             res+=st[i];
//         }
//         else if (st[i]=='(') {
//             s.push(st[i]);
//         }
//         else if (st[i]==')') {
//             while (!st.empty()&&s.top()!='(') {
//                 res+=s.top();
//                 s.pop();
//             }
//             if (!s.empty()) {
//                 s.pop();
//             }
//         }
//         else {
//             while (!st.empty()&&prec(s.top())>=prec(st[i])) {
//                 res+=s.top();
//                 s.pop();
//             }
//             s.push(st[i]);
//         }
//     }
//
//     while (!st.empty()) {
//         res+=s.top();
//         s.pop();
//     }
//     return res;
// }
//
// int main() {
//     cout<<infinixtopostfix("(a-b/c)*(a/k-l)")<<endl;
//
// }

// ---------------------------------------------------------------

// //                             MERGE SORT..
//
// #include <iostream>
// using namespace std;
//
// void merge(int arr[],int l, int mid , int r) {
//     int n1=mid-l+1;
//     int n2=r-mid;
//     int a[n1];
//     int b[n2];
//     for (int i=0;i<n1;i++) {
//         a[i]=arr[l+i];
//     }
//     for (int i=0;i<n2;i++) {
//         b[i]=arr[mid+1+i];
//     }
//
//     int i=0;
//     int j=0;
//     int k=l;
//
//     while (i<n1 && j<n2) {
//         if (a[i]<b[j]) {
//             arr[k]=a[i];
//             k++;
//             i++;
//         }
//         else {
//             arr[k]=b[j];
//             k++;
//             j++;
//         }
//     }
//     while (i<n1) {
//         arr[k]=a[i];
//         k++;
//         i++;
//     }
//     while (j<n2) {
//         arr[k]=b[j];
//         k++;
//         j++;
//     }
// }
// void mergeSort(int arr[],int l, int r) {
//     if (l<r) {
//         int mid=(l+r)/2;
//         mergeSort(arr,l,mid);
//         mergeSort(arr,mid+1,r);
//         merge(arr,l,mid,r);
//     }
// }
// int main() {
//     int arr[]={5,4,3,2,1};
//     mergeSort(arr,0,4);
//     for (int i=0;i<5;i++) {
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     return 0;
// }

// -------------------------------------------------------------------------

// //                       INSERTION IN LINKEDLIST AT BEGGING.
//
// #include <iostream>
// using namespace std;
//
// struct node{
// int data;
//     node* next;
// };
//
// void insert(node*& head,int val) {
//     node* newnode=new node;
//     newnode->data=val;
//     newnode->next=head;
//     head=newnode;
// }
//
// void display(node* head) {
//     node* temp=head;
//     while (temp!=nullptr) {
//         cout<<temp->data<<" -> ";
//         temp=temp->next;
//     }
//     cout<<"Null"<<endl;
// }
// int main() {
//     node* head=nullptr;
//     insert(head,10);
//     insert(head,20);
//     insert(head,30);
//     display(head);
//     return 0;
// }

// --------------------------------------------------------------------------

// //                            INSERT ELEMENT IN LINKEDLIST AT ENDING..
//
// #include <iostream>
// using namespace std;
//
// struct node {
//     int data;
//     node* next;
// };
//
// void insert(node*&head ,int val) {
//     node* newnode=new node;
//     newnode->data=val;
//     newnode->next=nullptr;
//
//     if (head==nullptr) {
//         head=newnode;
//         return;
//     }
//     node*temp=head;
//     while (temp->next!=nullptr) {
//         temp=temp->next;
//     }
//     temp->next=newnode; //link last node to new node
// }
//
// void display(node* head) {
//     node*temp=head;
//     while (temp!=nullptr) {
//         cout<<temp->data<<" -> ";
//         temp=temp->next;
//
//     }
//     cout<<"Null"<<endl;
// }
//
// int main() {
//     node* head=nullptr;
//     insert(head,10);
//     insert(head,20);
//     insert(head,30);
//     display(head);
//     return 0;
// }

// ---------------------------------------------------------------------------

// //                            INSERT AT ANY SPECIFIC POINT IN LINKEDLIST...
//
// #include<iostream>
// using namespace std;
// struct node {
//     int data;
//     node* next;
// };
//
// void insert(node*&head,int val,int pos) {
//     node* newnode= new node;
//     newnode->data=val;
//     newnode->next=nullptr;
//
//     if (pos==1) {
//         newnode->next=head;
//         head=newnode;
//         return;
//     }
//
//     node* temp=head;
//     int count=1;
//
//     while (temp!=nullptr&&count<pos-1) {
//         temp=temp->next;
//         count++;
//     }
//
//     if (temp==nullptr) {
//         cout<<"Position out of range!"<<endl;
//         delete newnode;
//         return;
//     }
//     newnode->next=temp->next;
//     temp->next=newnode;
// }
//
// void display(node*head) {
//     node* temp=head;
//     while (temp!=nullptr) {
//         cout<<temp->data<<" ";
//         temp=temp->next;
//     }
//     cout<<"Null"<<endl;
// }
//
// int main() {
//     node*head=nullptr;
//
//     head=new node(10,nullptr);
//     head->next=new node(20,nullptr);
//     head->next->next=new node(30,nullptr);
//     cout<<"Original list: ";
//     display(head);
//
//     insert(head,10,1);
//     insert(head,20,2);
//     insert(head,30,3);
//
//     cout<<"After insertion: ";
//     display(head);
//     return 0;
// }




