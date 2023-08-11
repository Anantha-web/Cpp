class Solution {
public:
    int findMin(vector<int>& nums) {
        
        int a=0;
        int b=nums.size()-1;
        
        while(a<b){
            int mid=a+(b-a)/2;
            if(nums[mid]>nums[b]){
                a=mid+1;
            }
            else{
                b=mid;
            }
        }
        return nums[b];

    }
        
};


//Input: nums = [3,4,5,1,2]
// Output: 1
// Explanation: The original array was [1,2,3,4,5] rotated 3 times.

// Input: nums = [4,5,6,7,0,1,2]
// Output: 0
// Explanation: The original array was [0,1,2,4,5,6,7] and it was rotated 4 times.


// Input: nums = [11,13,15,17]
// Output: 11
// Explanation: The original array was [11,13,15,17] and it was rotated 4 times.

  
