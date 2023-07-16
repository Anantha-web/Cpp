   // arr[]: Input Array
    // N : Size of the Array arr[]
    // Function to count inversions in the array.
    long long int inversionCount(long long arr[], long long N)
    {
        // Your Code Here
        long long int cnt=0;
        
        if(N==1){
            return 0;
        }
        
        if(N==2){
            return arr[1] < arr[0];
        }
        int i=0, j= N-1;
        while(i<=j){
            if(i==j){
                i++;
                j=N-1;
            }
            if(arr[i]>arr[j]){
                cnt++;
            }
            j--;
        }
        return cnt;
    }


// Input: N = 5, arr[] = {2, 4, 1, 3, 5}
// Output: 3
// Explanation: The sequence 2, 4, 1, 3, 5 
// has three inversions (2, 1), (4, 1), (4, 3).

// Input: N = 3, arr[] = {10, 10, 10}
// Output: 0
// Explanation: As all the elements of array 
// are same, so there is no inversion count.
