/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
     if (!head || !head->next) {
            return false;
        }

        // Initialize slow and fast pointers
        ListNode *slow = head;
        ListNode *fast = head;

        // Traverse the list
        while (fast && fast->next) {
            slow = slow->next;          // Move slow pointer by 1 step
            fast = fast->next->next;    // Move fast pointer by 2 steps

            // If slow and fast meet, there is a cycle
            if (slow == fast) {
                return true;
            }
        }

        // If fast reaches the end, there is no cycle
        return false;
    }
};