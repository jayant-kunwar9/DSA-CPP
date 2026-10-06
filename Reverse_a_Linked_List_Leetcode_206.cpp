// #include <iostream>
// using namespace std;
//
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
// ListNode* reverseList(ListNode* head) {
//
//     // Three pointers: prev, curr, next
//     ListNode* prev = NULL;
//     ListNode* curr = head;
//     ListNode* next = NULL;
//
//     while (curr != NULL) {
//
//         // Save the next node
//         next = curr->next;
//
//         // Reverse the link
//         curr->next = prev;
//
//         // Move prev forward
//         prev = curr;
//
//         // Move curr forward
//         curr = next;
//     }
//
//     // prev is the new head
//     return prev;
// }
//
// int main() {
//
//     // Create linked list
//     ListNode* head = new ListNode(10);
//     head->next = new ListNode(20);
//     head->next->next = new ListNode(30);
//     head->next->next->next = new ListNode(40);
//
//     // Call reverse function
//     head = reverseList(head);
//
//     // Print linked list
//     while (head != NULL) {
//         cout << head->data << " ";
//         head = head->next;
//     }
//
//     return 0;
// }