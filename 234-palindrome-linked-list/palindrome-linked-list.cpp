/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    bool isPalindrome(ListNode* head) {
                if (!head || !head->next) return true;

        // 1) Find the end of the first half
        ListNode* slow = head;
        ListNode* fast = head;
        while (fast->next && fast->next->next) {
            slow = slow->next;
            fast = fast->next->next;
        }

        // 2) Reverse the second half
        ListNode* second = reverse(slow->next);

        // 3) Compare both halves
        ListNode* p = head;
        ListNode* q = second;
        bool ok = true;
        while (q) {
            if (p->val != q->val) { ok = false; break; }
            p = p->next;
            q = q->next;
        }

        // 4) Restore the list (optional but safe)
        slow->next = reverse(second);

        return ok;
    }
    private:
    ListNode* reverse(ListNode* node) {
        ListNode* prev = nullptr;
        while (node) {
            ListNode* nxt = node->next;
            node->next = prev;
            prev = node;
            node = nxt;
        }
        return prev;
    }
};