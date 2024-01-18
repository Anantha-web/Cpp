class Solution {
public:
    
    vector<int> answer;
    void preorder(TreeNode* root){
        
        answer.push_back(root->val);
        if(root->left) preorder(root->left);
        if(root-> right) preorder(root -> right);
    }
    vector<int> preorderTraversal(TreeNode* root) {
        
        if(root == NULL){
            return answer;
        }
        
        preorder(root);
        return answer;
    }
};
