class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        for (int i = 1; i < n; i++) {
            if (nums[i] == nums[i - 1])
                return true;
        }
        return false;
        
        
        // int n = nums.size();
        // for(int i=0; i<n-1; i++){
        //     for(int j = i+1; j<=n-1; j++){
        //         if(nums[i] == nums[j]){
        //             return true;
        //         }
        //     }
        // }
        // return false;
    }
        
};


// Input: nums = [1,2,3,1]
// Output: true

// Input: nums = [1,2,3,4]
// Output: false
