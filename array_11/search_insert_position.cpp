class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        
        int ans=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==target){
                ans=i;
            }
            else{
                if(target>nums[i])
                ans=i+1;
            }
        }
        return ans;
    }
        
        // int index =0;
        // int n = nums.size();
        // for(int i=0; i<n; i++){
        //     if(nums[i] == target){
        //         return i;
        //     }
        // }
        // // return 1;
};
