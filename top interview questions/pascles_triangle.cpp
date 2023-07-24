
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> output(numRows);
        for(int i=0; i<numRows; i++){
            output[i].resize(i+1, 1);
            for(int j=1; j<i; j++){
                output[i][j] = output[i-1][j-1] + output[i-1][j];
            }
        }
        return output;
    }
};


//     Time Complexity : O(N^2). Where N is the numRows. Here total number of iterations are : N*(N+1)/2 which creates the time complexity.

//     Space Complexity : O(1). Constant space. Because we are creating 2D vector output as per the demand of
//     program.

//     Solved using Dynamic Programming Approach(Tabulation: Bottom Up).


//my approach --- brute force -- O(N^2)
// class Solution {
//  public:
//   vector<vector<int>> generate(int numRows) {
//     vector<vector<int>> ans;

//     for (int i = 0; i < numRows; ++i)
//       ans.push_back(vector<int>(i + 1, 1));

//     for (int i = 2; i < numRows; ++i){
//       for (int j = 1; j < ans[i].size() - 1; ++j){
//          ans[i][j] = ans[i - 1][j - 1] + ans[i - 1][j];
// }
// }

//     return ans;
//   }
// };


// class Solution {
// public:
//     vector<vector<int>> generate(int numRows) {
//         vector<vector<int>> output;
//         // Base cases...
//         if(numRows == 0)  return output;
//         // Traverse all the elements through a loop
//         for(int i=0; i<numRows; i++)
//             output.push_back(vector<int>(i + 1, 1));    // Initialize the first row of the pascal triangle as {1}.
//         // For generating each row of the triangle...
//         for (int i = 2; i < numRows; ++i)
//             // Run an inner loop from j = 1 to j = {previous row size} for calculating element of each row of the triangle.
//             for (int j = 1; j < output[i].size() - 1; ++j)
//                 // Calculate the elements of a row, add each pair of adjacent elements of the previous row in each step of the inner loop.
//                 output[i][j] = output[i - 1][j - 1] + output[i - 1][j];
//         return output;      // After the inner loop gets over, simply output the row generated.
//     }
// };

