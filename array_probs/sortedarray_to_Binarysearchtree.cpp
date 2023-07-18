class Solution {
public:
    	TreeNode* create_tree(vector<int>& nums,int i,int n)
	{
		if(i>n)
			return(NULL);
	   int mid=(i+n)/2;
	   TreeNode *root = new TreeNode(nums[mid]);
	   root->left = create_tree(nums,i,mid-1);
	   root->right = create_tree(nums,mid+1,n);
	   return(root);
	}
    
	TreeNode* sortedArrayToBST(vector<int>& nums) {
		int n=nums.size();
		return(create_tree(nums,0,n-1));
	}
};


//easy problem 
//finding the middle node of array and make it as root for bst. and then keep the left right elements in array as the child of rooyt on left and right.
