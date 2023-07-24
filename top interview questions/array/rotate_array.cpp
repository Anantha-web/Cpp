class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        {
        int a = k % nums.size();
        reverse(nums.begin(),nums.end());
        reverse(nums.begin(),nums.begin()+a);
        reverse(nums.begin()+a,nums.end());
    }
    }
};


// class Solution {
// public:
//     void rotate(vector<int>& nums, int k) {
//         int n=nums.size();
//         vector<int> temp(nums.size());
//         for(int i=0;i<n;i++){
//             temp[(i+k)%n]=nums[i];
//         }
//         nums=temp;
//     }
// };

// int a = k % nums.size();: This line calculates the remainder of the division of k by the size of the nums vector. The variable a will store the result of this calculation.

// reverse(nums.begin(), nums.end());: This line reverses the entire vector nums. The reverse function is a standard C++ algorithm that takes two iterators as arguments and reverses the elements in the range defined by those iterators.

// reverse(nums.begin(), nums.begin() + a);: This line reverses the first a elements of the vector. It uses the same reverse function but applies it only to the elements in the range from the beginning of the vector (nums.begin()) up to (but not including) the a-th element.

// reverse(nums.begin() + a, nums.end());: This line reverses the elements of the vector starting from the a-th element to the end of the vector (nums.end()). Again, the reverse function is used to achieve this.

// Now, let's trace the code with an example. Assume we have a vector nums containing the elements [1, 2, 3, 4, 5], and k = 2.

// a = k % nums.size() = 2 % 5 = 2.

// Reversing the entire vector [1, 2, 3, 4, 5] results in [5, 4, 3, 2, 1].

// Reversing the first a elements, i.e., the first 2 elements ([5, 4]), results in [4, 5, 3, 2, 1].

// Reversing the elements from the a-th position to the end ([3, 2, 1]), results in [4, 5, 1, 2, 3].

// So, after executing the rotate function with the given vector and value of k, the nums vector will be modified to [4, 5, 1, 2, 3]. This is the final result, and the elements are rotated to the right by 2 positions.
