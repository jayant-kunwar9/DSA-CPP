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
// class Solution {
// public:
//     bool hasCycle(ListNode* head) {   // This is a SLOW-FAST APPROACH
//
//         // Slow pointer initialized with head
//         ListNode* slow = head;
//
//         // Fast pointer initialized with head
//         ListNode* fast = head;
//
//         // Continue while fast can move forward
//         while (fast != NULL && fast->next != NULL) {
//
//             // Move slow pointer by 1 step
//             slow = slow->next;
//
//             // Move fast pointer by 2 steps
//             fast = fast->next->next;
//
//             // If slow and fast meet at the same node,
//             // then a cycle exists
//             if (slow == fast) {
//                 return true;
//             }
//         }
//
//         // If fast reaches NULL, there is no cycle
//         return false;
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
//
//     // Create a cycle:
//     // 10 → 20 → 30 → 40
//     //           ↑         ↓
//     //           ← ← ← ← ←
//     head->next->next->next->next = head->next;
//
//     // Create Solution object
//     Solution obj;
//
//     // Check if linked list has a cycle
//     cout << obj.hasCycle(head) << endl;
//
//     return 0;
// }
