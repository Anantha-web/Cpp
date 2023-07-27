class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> mp;
        int n = nums.size();
        for(int i=0;i<n;i++){
        // if we don't get the difference, then add the index in map
            if(mp.find(target-nums[i])==mp.end())
                mp[nums[i]] = i;
            else
                return {i, mp[target-nums[i]]};
        }
        
        return {};
    }
    
//     Intuition
// Insert the diffrence of target and element from nums vector in map, - If its already present return the answer.
// If not present, add index of that elemnt in map.
// Complexity
// Time complexity: O(n)
// Space complexity: O(n)
        //int n = nums.size();
        // for(int i=0; i<n-1; i++){
        //     for(int j=i+1; j<n; j++){
        //         if(nums[i] + nums[j] == target){
        //             return {i,j};
        //         }
        //     }
        // }
        // return {};
        
};
