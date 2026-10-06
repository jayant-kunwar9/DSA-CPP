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
// class Solution {     // This is a SLOW-FAST APPROACH
// public:
//     ListNode* middleNode(ListNode* head) {
//
//         // Make a slow pointer and initialize it with head
//         ListNode* slow = head;
//
//         // Make a fast pointer and initialize it with head
//         ListNode* fast = head;
//
//         // Continue until fast reaches the end
//         while (fast != NULL && fast->next != NULL) {
//
//             // Move slow pointer by 1 step
//             slow = slow->next;
//
//             // Move fast pointer by 2 steps
//             fast = fast->next->next;
//         }
//
//         // slow is now pointing to the middle node
//         return slow;
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