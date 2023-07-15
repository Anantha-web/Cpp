   int missingNumber(vector<int>& array, int n) {
        // Your code goes here
        int sum = n*(n+1)/2;
        for(int i=0; i<=n; i++){
            sum = sum - array[i];
        }
        return sum;
    }
    
    // int sum = 0;
    // for(int i=0; i<n-1; i++){
    //     sum = sum + array[i];
    // }
    // int res = n*(n+1)/2 - sum;
    // return res;

    //     sum = 0;
    //     avg = (n*(n+1)/2);
    //     for(int i=0; i<=n; i++){
    //         sum += array[i];
    //     }
    //     int res = avg - sum
    //     return res;
    // }
// missinig number in a sequence is found by using the sum of the array and the avg of the array 
