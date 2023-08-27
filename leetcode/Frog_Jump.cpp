class Solution {
public:
   bool canCross(vector<int>& stones) {
        unordered_map<int, unordered_set<int>> mp;  //  form a map in which we store the index and in set to store the possible jump sizes that can be used to reach a particular stone
        mp[stones[0]] = {0};  // starting index 
// iterate
        for (int i = 0; i < stones.size(); ++i) {
            int position = stones[i];

            for (auto it : mp[position]) { //for each jump
                for (int jump = it - 1; jump <= it + 1; ++jump) {  // there are 3 possiblity 
				//1 )it-1   
				//2) it 
				//3) it+1
                    if (jump > 0) {  // if possible or reachable
                        mp[stones[i] +  jump].insert(jump); // add in map   
                    }
                }
            }
        }
        return !mp[stones.back()].empty();  // if mp should not empty it means we should reach at the last index from some of the index.
//		for example- [0, 1, 3, 5, 6, 8, 12, 17]
//		mp[0] = {0};  
//		mp[1] = {1};  
//		mp[3] = {1, 2}; 
//		mp[5] = {1};   
//		mp[6] = {1, 2}; 
//		mp[8] = {1, 2}; 
//		mp[12] = {1, 2};
//		mp[17] = {1};  // not empty mean we should reach the last index 
    }
};
