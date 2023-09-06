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
// class Solution {
// public:
//     vector<ListNode*> splitListToParts(ListNode* head, int k) {
        
//     }
// };

class Solution {
public:
    vector<ListNode *> splitListToParts(ListNode *root, int k) {
        vector<ListNode *> ret(k, NULL), tmp;
        ListNode *last_node = NULL;
        int count = 0;
        while (root) {
            ListNode *lnode = new ListNode(root->val);
            lnode->next = root->next;
            tmp.push_back(lnode);
            if (last_node) {
                last_node->next = lnode;
            }
            count++;
            last_node = lnode;
            root = root->next;
        }
        int k_div = count / k, k_mod = count % k, last = 0;
        for (int i = 0; i < k && i < count; ++i) {
            ret[i] = tmp[last];
            if (i < k_mod) {
                last += (k_div + 1);
            } else {
                last += k_div;
            }
            tmp[last - 1]->next = NULL;
        }
        return ret;
    }
};
