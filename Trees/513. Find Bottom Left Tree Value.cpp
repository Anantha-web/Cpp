class Solution {
public:
    void helper(TreeNode* root,vector<int> &ans,int level=0){
        if(root==NULL)
            return;
        if(ans.size()<=level)
            ans.push_back(root->val);
        //go left
        helper(root->left,ans,level+1);
        //go right
        helper(root->right,ans,level+1);
        return;
        
    }
    
    int findBottomLeftValue(TreeNode* root) {
        vector<int> ans;
        helper(root,ans);
        return ans[ans.size()-1];
    }
};
