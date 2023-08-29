class Solution {
public:
    int bestClosingTime(string customers) {
        
        int n = customers.size();
        vector<int> right(n+1,0);
        vector<int> left(n+1,0);
        left[0] = 0;

        for(int i = 1;i<n+1;i++){
            if(customers[i-1] == 'N'){
                left[i] = left[i-1] +1;
            }
            else left[i] = left[i-1];
        }

        right[n] = 0;
        for(int i = n-1;i>=0;i--){
            if(customers[i] == 'Y'){
                right[i] = right[i+1] +1;
            }
            else right[i] = right[i+1];
        }
        
        int index = 0;
        int min1 = 1e9;
        for(int i  = 0;i<n+1;i++){
            if (right[i]+left[i] < min1){
                min1 = right[i]+left[i];
                index = i;
            }
        }
        return index;
    }
};
