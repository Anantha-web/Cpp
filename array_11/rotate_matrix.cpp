class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        reverse(matrix.begin() , matrix.end());
        int row = matrix.size();
        for (int i = 0; i < row; i++) {
            for (int j = 0; j <= i; j++) {
                swap(matrix[i][j], matrix[j][i]);
            }
        }
    }
};


// class Solution {
// public:
//     void rotate(vector<vector<int>>& matrix) {
        
//         int n= matrix.size();
//         for(int i=0;i<n;i++){
//             for(int j=i;j<n;j++){
//                 swap(matrix[i][j],matrix[j][i]);
//             }//swaped the elements [i][j] to [j][i] toobtain the transpose of matrix
//         }
        
//         //now reversing the rows in below code
//         for(int i=0;i<n;i++){
//             for(int j=0;j<n/2;j++){
//                 swap(matrix[i][j],matrix[i][n-1-j]);
//             }
//         }
        
//     }


//O(N^2) SOLUTION
//A BRUTE FORCE APPROACH
