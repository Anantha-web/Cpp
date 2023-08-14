class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        
        int n=nums.size();
        priority_queue<int, vector<int>, greater<int>> 
        pq(nums.begin(), nums.begin()+k);

        for (int i=k; i<n; i++){
            pq.push(nums[i]);
            pq.pop();
        }
        return pq.top();
        
    }
};


Input: nums = [3,2,1,5,6,4], k = 2
Output: 5

Input: nums = [3,2,3,1,2,4,5,5,6], k = 4
Output: 4


// Given an integer array nums and an integer k, return the kth largest element in the array.

// Note that it is the kth largest element in the sorted order, not the kth distinct element.

// Can you solve it without sorting
