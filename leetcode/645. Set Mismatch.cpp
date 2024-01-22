class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int missing_num = -1;
        int repeated_num = -1;

        for(int i=1; i<=nums.size(); i++){
            int count =0;
            for(int j=0; j<nums.size(); j++){
                if(nums[j]==i){
                    count++;
                }
            }

            if(count==2){
                repeated_num=i;
            }
            else if(count ==0){
                missing_num=i;
            }

        }
        return {repeated_num, missing_num};
        
    }
};
