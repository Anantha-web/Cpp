class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        
        vector<int>ans;
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        int i = 0, j = 0;
        while(i < nums1.size() && j < nums2.size()){
            if(nums1[i] == nums2[j]){
                ans.push_back(nums1[i]);
                i++;
                j++;
            }
            else if(nums1[i] < nums2[j])
                i++;
            else
                j++;
        }
        return ans;
    }
//         int n1= nums1.size();
//         int n2= nums2.size();
        
//         sort(nums1.begin(), nums1.end());
//         sort(nums2.begin(), nums2.end());
        
//         for(int i=0; i<n1; i++){
//             for(int j=0; j<n2; j++){
//                 vector<int> temp;
//                 if(nums1[i]==nums2[j]){
//                     temp = nums1[i];
//                 }
//             }
//         }
//         return temp;
        
//     }
};



// Let's trace through the code with this example:

// Initialize an empty vector "ans" to store the elements of the intersection.

// Sort both input vectors "nums1" and "nums2" in ascending order.

// Sorted "nums1": {1, 1, 2, 2}
// Sorted "nums2": {2, 2}
// Initialize two pointers "i" and "j" to 0 to keep track of the current positions in "nums1" and "nums2," respectively.

// i = 0
// j = 0
// Enter the while loop (while(i < nums1.size() && j < nums2.size())).

// Compare the elements at the current positions "i" and "j" in "nums1" and "nums2," respectively.

// For nums1[0] (1) and nums2[0] (2): Since 1 is less than 2, increment "i."

// i = 1
// Compare the elements at the updated positions "i" and "j" in "nums1" and "nums2," respectively.

// For nums1[1] (1) and nums2[0] (2): Since 1 is less than 2, increment "i."

// i = 2
// Compare the elements at the updated positions "i" and "j" in "nums1" and "nums2," respectively.

// For nums1[2] (2) and nums2[0] (2): Since 2 is equal to 2, add 2 to the "ans" vector, and increment both "i" and "j."

// ans = {2}
// i = 3
// j = 1
// ....

// So, the output of the function for the given example will be {2,2}, representing the elements that appear in both "nums1" and "nums2."

// Complexity
// Time complexity:$$O(n)$$
// Space complexity:$$O(1)$$


