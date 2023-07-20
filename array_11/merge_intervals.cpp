class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());

        for(int i = 1;i < intervals.size();){
            if(intervals[i - 1][1] >= intervals[i][0]){
                intervals[i - 1][1] = max(intervals[i][1],intervals[i - 1][1]);
                intervals.erase(intervals.begin() + i);
            }
            else i++;
            // why i++ in else (dry run this TC)
            // [0,2],[1,4],[3,5]
        }
        return intervals;
        
    }
};
//O(NolgN) solution


class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> ans;
        sort(intervals.begin(),intervals.end());
        ans.push_back({intervals[0][0],intervals[0][1]});
        int n= intervals.size();
        for(int i=1;i<n;i++){
            if(intervals[i][0]<=ans.back()[1]){
                ans.back()[1]= max(ans.back()[1],intervals[i][1]);
            }else{
                ans.push_back({intervals[i][0],intervals[i][1]});
            }
        }
        return ans;
    }
};
//O(N)


// Example 1:

// Input: intervals = [[1,3],[2,6],[8,10],[15,18]]
// Output: [[1,6],[8,10],[15,18]]
// Explanation: Since intervals [1,3] and [2,6] overlap, merge them into [1,6].
// Example 2:

// Input: intervals = [[1,4],[4,5]]
// Output: [[1,5]]
// Explanation: Intervals [1,4] and [4,5] are considered overlapping.
