class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> res;
        sort(begin(nums), end(nums));
        do {
            res.push_back(nums);
        }while (next_permutation(begin(nums), end(nums)));

        return res;
    }
};


// Input: nums = [1,2,3]
// Output: [[1,2,3],[1,3,2],[2,1,3],[2,3,1],[3,1,2],[3,2,1

// Input: nums = [1]
// Output: [[1]]

// Input: nums = [0,1]
// Output: [[0,1],[1,0]]
