class Solution {
public:
    int maxArea(vector<int>& height) {
        
        int i = 0;
        int j = height.size() - 1;
        int maxi = 0;

        while (i < j) {
            int area = min(height[i], height[j]) * (j - i);
            maxi = max(maxi, area);

            if (height[i] < height[j]) {
                i++;
            } else {
                j--;
            }
        }

        return maxi;
    }
};

// O(N) time complexity
// we are finding the area between the height[j] means the element in the array and the (j-1) means the distances between the point which we are finding the area. suppose we are finding arae between number 3 and 4 which are at the indices 1 and 8, we take the less number among them and take trhe distance among them and multiplying it finally.
        
//         int n = height.size();
//         int maxi = 0;
        
//         int i = 0 ; 
//         int j = n-1;
//         while(j<i){
//             int area = min(height[i], height[j] * (j-i));
//             maxi = max(maxi, area);
//             if(height[i]<height[j]){
//                 i++;
                
//             }
//             // else if(i == j){
//             //     continue;
//             // }
//             else{
//                 j++;
//             } 
//          }

// //         return maxArea;
// //         for(int i =0; i <n-1; i++){
// //             //  int j=i+1;
// //             //  if(i < j){
// //             //      i++;
// //             // }
// //             for(int j=i+1; j<n; j++){
// //                 if(i<j){
// //                     i++;
// //                 }
// //                 else if(i==j){
// //                     continue;
// //                 }
// //                 else{
// //                     maxi = ;
// //                 }
// //                 // i++;
                
// //             }
            
// //         }
        
//         return maxi;
        
//     }
};
