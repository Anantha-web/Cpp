class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        
        int dup;
        
        //let's sort the arreay
        sort(nums.begin(), nums.end());
        
        for(int i=0; i<=nums.size(); i++){
            if(nums[i] == nums[i+1]){
                dup = nums[i];
                break;
            }
            // return dup;
        }
        return dup;
        
    }
          
};

// Example 1:

// Input: nums = [1,3,4,2,2]
// Output: 2
// Example 2:

// Input: nums = [3,1,3,4,2]
// Output: 3
