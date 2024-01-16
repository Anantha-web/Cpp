class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
        int ans=1,c=0;
        vector<int>v;
        
        for(int i=0;i<nums.size();i++)
        {   if(nums[i]==0){
             c++;
           }else{
            ans=ans*nums[i];}
        }
         for(int i=0;i<nums.size();i++){
           if(c!=0){
              if(c>1){
                     v.push_back(0); 
              }else{
                    if(nums[i]==0){
                       v.push_back(ans);
                }else{
                    v.push_back(0);
                }
              }
           }else{
               v.push_back(ans/nums[i]);
           }
         }   
        return v;
        
    }
};
