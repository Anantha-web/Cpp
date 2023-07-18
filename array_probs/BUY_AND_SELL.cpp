class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int psize =prices.size();
        int max_profit =0;
        
        for(int i=0; i<= psize-1; i++){
            for(int j=i+1; j< psize; j++){
                if(prices[j]- prices[i] > max_profit){
                    max_profit = prices [j] - prices[i];
                }
            }
        }
        return max_profit;
    }
};


//O(n^2) complexity


class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int n = prices.size();
        
        int maxi = INT_MIN;
        
        // min_val will keep track of minimum value of array
        
        int min_val = prices[0];
        
        for(int i = 1; i < n; i++)
        {
            // update the maxi
            
            maxi = max(maxi, prices[i] - min_val);
            
            // update the min_val
            
            min_val = min(min_val, prices[i]);
        }
        
        return maxi >= 0 ? maxi : 0;
    }
};

//O(n) complexity
