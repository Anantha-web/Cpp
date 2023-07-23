class Solution {
public:
    int uniquePaths(int m, int n) {
        vector<int>a(n, 1);
        for(int i=1; i<m; i++){
            for(int j = 1; j<n;j++){
                a[j]+=a[j-1];
            }
        }
        return a[n-1];
    }
        
};

// Input: m = 3, n = 2
// Output: 3
// Explanation: From the top-left corner, there are a total of 3 ways to reach the bottom-right corner:
// 1. Right -> Down -> Down
// 2. Down -> Down -> Right
// 3. Down -> Right -> Down

// class Solution {
// public:
//     int f(int i, int j, vector<vector<int>>&dp){
//         if(i == 0 && j == 0){
//             return 1;
//         }
//         if(i < 0 || j < 0){
//             return 0;
//         }

//         if(dp[i][j] != -1) return dp[i][j];

//         int up = f(i-1,j,dp);
//         int dw = f(i,j-1,dp);

//         return dp[i][j] = up+dw;
//     }
//     int uniquePaths(int m, int n) {
//         vector<vector<int>> dp(m,vector<int>(n,-1));
//         return f(m-1,n-1,dp);
//     }
// };
