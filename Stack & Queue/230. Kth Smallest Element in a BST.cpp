class Solution {
public:
    int kthSmallest(TreeNode* root, int k) {
        int counter=0;
        stack<TreeNode*>st;
        while(!st.empty() || root){
            while(root){
                st.push(root);
                root=root->left;
            }
            counter+=1;
            root=st.top();
            if(counter==k) return root->val;
            st.pop();
            root=root->right;
        }
        return -1;
    }
};
