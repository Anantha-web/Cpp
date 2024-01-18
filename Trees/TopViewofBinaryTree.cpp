vector<int> findTopView(Node* root)
	{
		// Write your code here...
		vector<int>ans;
		if(root == NULL) return ans;
		map<int, int>mp; // level position, node val
		
		queue<pair<Node*, int>>Q; // Node , Level
		Q.push({root, 0});
		
		while(!Q.empty()){
			auto it = Q.front();
			Q.pop();
			Node* node = it.first;
			int level = it.second;
			
			if(mp.find(level)== mp.end()) mp[level] = node->data;
			if(node->left != NULL) Q.push({node->left, level-1});
			if(node->right != NULL) Q.push({node->right, level+1});
		}
		
		for(auto x:mp){
			ans.push_back(x.second);
		}
		return ans;
	}
