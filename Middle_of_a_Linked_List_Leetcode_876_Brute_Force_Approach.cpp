// #include <iostream>
// using namespace std;
//
// // Definition of a linked list node
// struct ListNode {
//     int data;
//     ListNode* next;
//
//     ListNode(int value) {
//         data = value;
//         next = NULL;
//     }
// };
//
// class Solution {     // This is BRUTE-FORCE APPROACH
// public:
//     ListNode* middleNode(ListNode* head) {
//
//         // Step 1: Count the total number of nodes
//         int count = 0;
//         ListNode* temp = head;
//
//         while (temp != NULL) {
//             count++;
//             temp = temp->next;
//         }
//
//         // Step 2: Start again from the head
//         temp = head;
//
//         // Move to the middle node
//         // count / 2 gives the number of steps needed
//         for (int i = 0; i < count / 2; i++) {
//             temp = temp->next;
//         }
//
//         // temp is now pointing to the middle node
//         return temp;
//     }
// };
//
// int main() {
//
//     // Create linked list
//     ListNode* head = new ListNode(10);
//     head->next = new ListNode(20);
//     head->next->next = new ListNode(30);
//     head->next->next->next = new ListNode(40);
//     head->next->next->next->next = new ListNode(50);
//
//     // Create Solution object
//     Solution obj;
//
//     // Call middleNode function
//     ListNode* middle = obj.middleNode(head);
//
//     // Print the middle node
//     cout << "Middle node: " << middle->data << endl;
//
//     return 0;
// }