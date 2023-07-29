class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        int n = nums.size();
        if(n ==0) return 0;
        sort(nums.begin(), nums.end());
        int lsmall = INT_MIN;
        int cnt =0;
        int longest = 1;
        
        for(int i =0; i<n; i++){
            if(nums[i] - 1 == lsmall){
                cnt+=1;
                lsmall = nums[i];
            }
            else if(lsmall != nums[i]){
                cnt = 1;
                lsmall = nums[i];
            }
            longest = max(longest, cnt);
        }
        return longest;
        
//         unordered_map<int, bool> map;
//         for(int i = 0; i<nums.size(); i++){
//             map[nums[i]] = true;
//         }
        
//         for(int i=0; i<nums.size(); i++){
//             if(map.count(nums[i]-1) > 0){
//                 map[nums[i]] = false;
//             }
//         }
        
//         int maxlen = 0;
//         for(int i=0; i<nums.size(); i++){
//             if(map[nums[i]] == true){
//                 int j=0; int count=0;
//                 while(map.count(nums[i]+j) > 0){
//                     j++;
//                     count++;
//                 }
//                 if(count>maxlen){
//                     maxlen = count;
//                 }
//             }
//         }
//         return maxlen;
        
        
    }
};




// Input: nums = [100,4,200,1,3,2]
// Output: 4
// Explanation: The longest consecutive elements sequence is [1, 2, 3, 4]. Therefore its length is 4.

// Input: nums = [0,3,7,2,5,8,4,6,0,1]
// Output: 9
  
