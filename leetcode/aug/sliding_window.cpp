class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        
        
      priority_queue<pair<int,int>>pq;
      vector<int>ans;
        
      for(int i=0;i<nums.size();i++){
          pq.push({nums[i],i});
          
          if(i>=(k-1)){
              while(i - pq.top().second >= k){
                  pq.pop();
              }
              ans.push_back(pq.top().first);
          }
      }  
      return ans;
        
    }
};



// Input: nums = [1,3,-1,-3,5,3,6,7], k = 3
// Output: [3,3,5,5,6,7]
// Explanation: 
// Window position                Max
// ---------------               -----
// [1  3  -1] -3  5  3  6  7       3
//  1 [3  -1  -3] 5  3  6  7       3
//  1  3 [-1  -3  5] 3  6  7       5
//  1  3  -1 [-3  5  3] 6  7       5
//  1  3  -1  -3 [5  3  6] 7       6
//  1  3  -1  -3  5 [3  6  7]      7


// Input: nums = [1], k = 1
// Output: [1]
