// #include <iostream>
// using namespace std;
//
// // Definition of Linked List Node
// struct ListNode {
//     int val;
//     ListNode* next;
//
//     ListNode(int value) {
//         val = value;
//         next = NULL;
//     }
// };
//
// class Solution {
// public:
//     ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
//
//         // Step 1: Create a dummy node
//         ListNode* dummy = new ListNode(-1);
//
//         // temp will be used to build the merged list
//         ListNode* temp = dummy;
//
//         // Step 2: Traverse both lists
//         while (l1 != NULL && l2 != NULL) {
//
//             // Compare values of both nodes
//             if (l1->val <= l2->val) {
//
//                 // Attach l1 node
//                 temp->next = l1;
//
//                 // Move l1 forward
//                 l1 = l1->next;
//
//             } else {
//
//                 // Attach l2 node
//                 temp->next = l2;
//
//                 // Move l2 forward
//                 l2 = l2->next;
//             }
//
//             // Move temp forward
//             temp = temp->next;
//         }
//
//         // Step 3: Attach remaining nodes
//         if (l1 != NULL) {
//             temp->next = l1;
//         } else {
//             temp->next = l2;
//         }
//
//         // Step 4: Skip dummy node and return actual head
//         return dummy->next;
//     }
// };
//
// int main() {
//
//     // Create first sorted linked list
//     // 1 → 3 → 5
//     ListNode* l1 = new ListNode(1);
//     l1->next = new ListNode(3);
//     l1->next->next = new ListNode(5);
//
//     // Create second sorted linked list
//     // 2 → 4 → 6
//     ListNode* l2 = new ListNode(2);
//     l2->next = new ListNode(4);
//     l2->next->next = new ListNode(6);
//
//     // Create Solution object
//     Solution obj;
//
//     // Merge both lists
//     ListNode* head = obj.mergeTwoLists(l1, l2);
//
//     // Print merged linked list
//     while (head != NULL) {
//         cout << head->val << " ";
//         head = head->next;
//     }
//
//     return 0;
// }
