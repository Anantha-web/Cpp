class Solution {
public:
    int trap(vector<int>& height) {
        
        vector<int> lMax(height.size());
        vector<int> rMax(height.size());
       
        int mL = INT_MIN;
       
        for(int i = 0;i<lMax.size();i++){
            mL=max(height[i], mL);
            lMax[i] = mL;
        }
        
        mL = INT_MIN;
       
        for(int i = lMax.size()-1;i>-1;i--){
            mL=max(height[i], mL);
            rMax[i] = mL;
        }
        
        int ans = 0;
        
        for(int i = 0;i<height.size();i++){
            ans += min(lMax[i],rMax[i])-height[i];
        }
        return ans;
        
    }
};
