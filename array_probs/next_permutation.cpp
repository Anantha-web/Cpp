lass Solution {
    private:
    void reverse(vector<int>& nums, int s, int e) {
        while(s < e) {
            swap(nums[s++], nums[e--]);
        }
    }
    
    public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();

        int index = -1;
        for(int i = n-2; i >= 0; i--) { // TC: O(n)
            if(nums[i] < nums[i+1]) {
                index = i;
                break;
            }
        }
        
        if(index != -1) {
            for(int i=n-1;i>index;i--){ // TC: O(n)
                if(nums[i]>nums[index]){
                    swap(nums[i],nums[index]);
                    break;
                }
            }
            
        }

        reverse(nums, index+1, n-1); // TC: O(n)
    }
};


//O(N) 
//step1: the number starts changing from first decreasing sequence from end.
//step2: find the number for substitution
//step3: rearrange these numbers (reverse/sort)
//got desired next permutation
