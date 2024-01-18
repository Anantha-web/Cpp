/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        
        queue<TreeNode*> q;
        
        q.push(root);
        
        vector<vector<int>> v;
        
        if(root == NULL){
            return {};
        }
        while(!q.empty()){
            int s= q.size();
            vector<int> l1;
            for(int i=0; i<s; i++){
                
                 TreeNode* node= q.front();
                 q.pop();
                l1.push_back(node->val);
                if(node -> left != NULL){
                    q.push(node->left);
                }
                if(node->right != NULL){
                    q.push(node->right);
                }
                 
            }
            v.push_back(l1); 
            
        }
        return v;
        
    }
};
