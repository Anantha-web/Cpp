class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(vector<int>arr, int n, long long s)
    {
        // Your code here
        int j = 0;
        int sum = 0;
        for (int i = 0; i < n; i++) {
            sum += arr[i];
            // cout << sum << endl;
            while (sum > s) {
                sum -= arr[j];
                j++;
            }
            if (sum == s) {
                if (j<=i){
                    return {j + 1, i + 1};
                }
            }
        }
        return {-1};
    }
};