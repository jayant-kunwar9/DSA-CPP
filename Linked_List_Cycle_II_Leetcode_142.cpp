#include <iostream>
using namespace std;

// Definition of a linked list node
struct ListNode {
    int data;
    ListNode* next;

    ListNode(int value) {
        data = value;
        next = NULL;
    }
};

class Solution {
public:
    ListNode* detectCycle(ListNode* head) {

        // Slow and fast pointers initialized with head
        ListNode* slow = head;
        ListNode* fast = head;

        bool isCycle = false;

        // First, check whether a cycle exists
        while (fast != NULL && fast->next != NULL) {

            // Move slow by 1 step
            slow = slow->next;

            // Move fast by 2 steps
            fast = fast->next->next;

            // If slow and fast meet, a cycle exists
            if (slow == fast) {
                isCycle = true;
                break;
            }
        }

        // If no cycle exists, return NULL
        if (!isCycle) {
            return NULL;
        }

        // Cycle exists, so reinitialize slow to head
        slow = head;

        // Move both pointers one step at a time
        // until they meet at the starting node of the cycle
        while (slow != fast) {
            slow = slow->next;
            fast = fast->next;
        }

        // The meeting point is the starting node of the cycle
        return slow;
    }
};

int main() {

    // Create linked list
    // 10 → 20 → 30 → 40
    ListNode* head = new ListNode(10);
    head->next = new ListNode(20);
    head->next->next = new ListNode(30);
    head->next->next->next = new ListNode(40);

    // Create a cycle:
    // 10 → 20 → 30 → 40
    //      ↑         ↓
    //      ← ← ← ← ←
    head->next->next->next->next = head->next;

    // Create Solution object
    Solution obj;

    // Find the starting node of the cycle
    ListNode* cycleStart = obj.detectCycle(head);

    // Print result
    if (cycleStart != NULL) {
        cout << "Cycle starts at node: " << cycleStart->data << endl;
    } else {
        cout << "No cycle found" << endl;
    }

    return 0;
}