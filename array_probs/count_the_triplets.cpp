class Solution{
public:	
	
	int countTriplet(int arr[], int n)
	{
	    int count = 0;
 
        // Loop to count for triplets - o(n^3) approach
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {   
                for (int k = j + 1; k < n; k++) {
                    if (arr[i] + arr[j] == arr[k]) {
                        count++;
                    }
                    else if (arr[i] + arr[k] == arr[j]) {
                        count++;
                    }
                    else if (arr[j] + arr[k] == arr[i]) {
                        count++;
                    }
                }
            }
        }
        return count;
    }
// 	    // Your code goes here - o(n^2) approach
// 	    int i, sum;
// 	    int cnt = 0;
// 	    unordered_map<int, int> um;
// 	    for(i=0; i<=n ; i++){
// 	        um[arr[i]]++;
// 	    }
	    
// 	    for(i=0; i<=n; i++){
// 	        for(int j = i+1; j < n; j++){
// 	            sum = arr[i] + arr[j];
// 	            if(um.find(sum) != um.end()){
// 	                cnt++;
// 	            }
// 	        }
// 	    }
// 	}
// 	return cnt;


//  gfg solution 
#include<bits/stdc++.h>
using namespace std;
 
    // Function to count the number of ways
    // to choose the triples
    int countWays(int arr[], int n)
    {
        // compute the max value in the array
        // and create frequency array of size
        // max_val + 1.
        // We can also use HashMap to store
        // frequencies. We have used an array
        // to keep remaining code simple.
        int max_val = 0;
        for (int i = 0; i < n; i++)
            max_val = max(max_val, arr[i]);
        int freq[max_val + 1]={0};
        for (int i = 0; i < n; i++)
            freq[arr[i]]++;
 
        int ans = 0; // stores the number of ways
 
        // Case 1: 0, 0, 0
        ans += freq[0] * (freq[0] - 1) * (freq[0] - 2) / 6;
 
        // Case 2: 0, x, x
        for (int i = 1; i <= max_val; i++)
            ans += freq[0] * freq[i] * (freq[i] - 1) / 2;
 
        // Case 3: x, x, 2*x
        for (int i = 1; 2 * i <= max_val; i++)
            ans += freq[i] * (freq[i] - 1) / 2 * freq[2 * i];
 
        // Case 4: x, y, x + y
        // iterate through all pairs (x, y)
        for (int i = 1; i <= max_val; i++) {
            for (int j = i + 1; i + j <= max_val; j++)
                ans += freq[i] * freq[j] * freq[i + j];
        }
 
        return ans;
    }
 
    // Driver code
    int main()
    {
        int arr[]={ 1, 2, 3, 4, 5 };
        int n = sizeof(arr)/sizeof(int);
        cout<<(countWays(arr, n));
        return 0;
    }
