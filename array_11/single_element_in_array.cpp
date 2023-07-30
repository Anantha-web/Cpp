class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        
        int l = 0;
        int r = l+1;
        if(nums.size() <= 1) return nums[l];
        while(l < r) {
            if(nums[l] == nums[r]) {
                l+=2;
                r+=2;
            }
            else break;
        }
        return nums[l];
    
        
//         int n = nums.size();
//         int single =0;
        
//         for(int i = 0; i< n-1; i++){
//             for(int j = i+1; j< n; j++){
//                 if(nums[i] == nums[j]){
//                     i++;  
//                 }
//                 j++;
//                 single = nums[i];
                
//             }
//         }
//         return single;
        
    }
};


// two pointer approach
