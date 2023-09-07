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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode *dummy = new ListNode(0); // Create a dummy node.
        dummy->next = head;
        ListNode *prev = dummy; //the prev pointer on the dummy node.

        for (int i = 0; i < left - 1; i++) {
            prev = prev->next; // Move the prev pointer to the (left - 1)-th node.
        }

        ListNode *current = prev->next; // The current pointer starts just after the prev.

        // Reverse the portion.
        for (int i = 0; i < right - left; i++) {
            ListNode *x = current->next; // save current->next 
            current->next = x->next; // Update current's next 
            x->next = prev->next; // Insert x node between prev and its next node.
            prev->next = x; // Update prev's next to point to forw.
        }

        return dummy->next; 
    }
};
