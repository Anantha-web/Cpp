class Solution {
public:
    bool solve(int n,vector<int>& nums,vector<int> &dp)
    {
        if(n<0) return 1;
        if(dp[n]!=-1) return dp[n];
        bool a=0,b=0,c=0;
        if(n-1>=0 && nums[n]==nums[n-1]) a=solve(n-2,nums,dp);
         if(n-2>=0 && nums[n]==nums[n-1] && nums[n-1]==nums[n-2]) b=solve(n-3,nums,dp);
          if(n-2>=0 && nums[n]==nums[n-1]+1 && nums[n-1]==nums[n-2]+1) c=solve(n-3,nums,dp);
          return dp[n]=a|b|c;
    }
    
    bool validPartition(vector<int>& nums) {
        int n=nums.size();
        vector<int> dp(n+1,-1);
        return solve(n-1,nums,dp);
    }
};


// The subarray consists of exactly 2 equal elements. For example, the subarray [2,2] is good.
// The subarray consists of exactly 3 equal elements. For example, the subarray [4,4,4] is good.
// The subarray consists of exactly 3 consecutive increasing elements, that is, the difference between adjacent elements is 1. For example, the subarray [3,4,5] is good, but the subarray [1,3,5] is not


// Input: nums = [4,4,4,5,6]
// Output: true
// Explanation: The array can be partitioned into the subarrays [4,4] and [4,5,6].
// This partition is valid, so we return true.

// Input: nums = [1,1,1,2]
// Output: false
// Explanation: There is no valid partition for this array
