class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
    
        if(n==1) return;
        int i=0, j=0;
        while(i<n){
            if(nums[i]!=0){
                swap(nums[i],nums[j]);
                j++;
                
            }
            i++;
        }
        
    }
};


//O(N ) solution
//O(1) Complexitty

// my approach is moving the zeros to the last if we find them in the middle of the array.
