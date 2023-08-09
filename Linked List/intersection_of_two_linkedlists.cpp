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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        
        //base case
        //if any linkedlist is null we don't find any intersection, so return NULL
        
        if(headA == NULL || headB == NULL){
            return NULL;
        }
        
        //take to dummy nodes
        ListNode* p = headA;
        ListNode* q = headB;
        
        //Is A != B
        while(p != q){
            
            p = p == NULL? headB : p ->next;
            q = q == NULL? headA : q->next;
        }
        return p;
        
    }
};
