// #include<iostream>
// using namespace std;
//
// // Creation of NODE:
//
// class Node {
// public:
//     int data;
//     Node* next;
//
//     Node(int val) {   // this is a constructor
//         data = val;
//         next= NULL;
//     }
// };
//
// // class to comboine these nodes:
//
// class List {
//     Node* head;
//     Node* tail;
//
// public:
//     List() {   // this is a non-paramatize contruster
//         head = tail = NULL;
//
//     }
//
//     void push_front(int val) {     // this is PUSH_FRONT function , every node comes before an existing node...
//         Node* newNode = new Node(val);  // this is the dynamic way to create mew node, that is preflable
//         //Node newNode1(val); // this is the static way to create a new node, jaise hi hu, push_front se bahar aayennge waise hi ye object delete ho jaayega, thats why we doesnot recommend this..
//
//         if (head==NULL) {   // if nothing is there , and i have to push a integer...
//             head=tail=newNode;
//             return;
//         }else {
//             newNode->next= head;
//             head= newNode;
//         }
//     }
//
//
//     void push_back(int val) {    // this is the Push_Back function, in which every node comes after the existing node...
//         Node* newNode = new Node(val);
//
//         if (head==NULL) {
//             // if nothing is there , and i have to push a integer...
//             head=tail=newNode;
//             return;
//         }else {
//             tail->next= newNode;
//             tail= newNode;
//         }
//     }
//
//
//     void pop_front() {    // this function is used, to delete the node which is the in the starting ...
//         if (head==NULL) {
//             cout<<"List is empty"<<endl;
//             return;
//         }else {
//             Node* temp=head;
//             head=head->next;
//             temp->next=NULL;
//             delete temp;
//         }
//     }
//
//     void pop_back() {    // this is Pop_Back function , it deletes the last element...
//
//         if (head == NULL) {
//             cout << "List is empty" << endl;
//             return;
//         }
//
//         // Only one node
//         if (head->next == NULL) {
//             delete head;
//             head = NULL;
//             tail = NULL;
//             return;
//         }
//
//         Node* temp = head;
//
//         // Reach second-last node
//         while (temp->next != tail) {
//             temp = temp->next;
//         }
//
//         delete tail;
//         tail = temp;
//         temp->next = NULL;
//     }
//
//     // to print the linked list:
//
//     void printLL() {
//         Node* temp = head;
//
//         while (temp != NULL) {
//             cout<<temp->data<<"->";
//             temp= temp->next;
//         }
//         cout<<"NULL"<<endl;
//     }
// };
//
// int main() {
//
//     List ll ; // this way our link list create in our main function, just writing this line
//     ll.push_front(1);
//     ll.push_front(2);
//     ll.push_front(3);
//
//     ll.push_back(4);
//
//     ll.pop_front();   // this will delete the 3 node...
//
//
//
//     ll.printLL();
//
//     ll.pop_back();
//     ll.printLL();
//
// }