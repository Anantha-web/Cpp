class Solution {
public:
    int candy(vector<int>& ratings) {
        
        int n = ratings.size();
        vector<int> left_to_right(n,1);
        vector<int> right_to_left(n,1);
        
        for(int i=1; i<n; i++){
            if(ratings[i] > ratings[i-1]){
                left_to_right[i] = left_to_right[i-1]+1;
            }
        }
        
        for(int i = n-2; i>=0; i--){
            if(ratings[i] > ratings[i+1]){
                right_to_left[i] = right_to_left[i+1]+1;
            }
        }

        int ans =0;

        for(int i =0;i<n;i++){
           ans = ans+max(right_to_left[i],left_to_right[i]);
        }
        return ans;
    }
};
