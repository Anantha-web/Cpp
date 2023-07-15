class Solution{
public:	
	
	int countTriplet(int arr[], int n)
	{
	    int count = 0;
 
        // Loop to count for triplets
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
// 	    // Your code goes here
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
