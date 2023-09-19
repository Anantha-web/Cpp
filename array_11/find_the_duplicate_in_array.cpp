class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        
       int ind = 0;
		
        sort(nums.begin(),nums.end());
        for(int i = 0; i < nums.size() - 1; i++)
        {
            if(nums[i] == nums[i+1])
            {
                ind = nums[i];
                break;
            }
        }
        return ind;
        
    }
};



// class Solution {
// public:
//     int findDuplicate(vector<int>& nums) {
//         int n = nums.size();
//         for(int i=0;i<n;i++){
//             int temp = abs(nums[i]);
//             arr[temp-1] = -nums[temp-1];
//             if(nums[temp-1] > 0) return temp;
//         }     
//         return -1;   
//     }
// };
