 // X[], Y[]: input array
    // M, N: size of arrays X[] and Y[] respectively
    //Function to count number of pairs such that x^y is greater than y^x.
    long long countPairs(int X[], int Y[], int M, int N)
    {
       //Your code here
       
       long long cnt = 0;
       sort(X, X+M, compare);
       sort(Y, Y+N, compare);
       
       int j=0;
       for(int i=0; i<M;i++){
           while(j<N && pow(X[i])>pow(Y[j])){
               j++;
           }
           cnt+=j;
       }
       return cnt;
       
    }

// long long countPairs(int X[], int Y[], int M, int N) {
//         // Calculate and store the transform values
//         double X_transform[M];
//         double Y_transform[N];

//         for (int i = 0; i < M; i++) {
//             X_transform[i] = transform(X[i]);
//         }

//         for (int i = 0; i < N; i++) {
//             Y_transform[i] = transform(Y[i]);
//         }

//         // Sort the transformed arrays
//         sort(X_transform, X_transform + M);
//         sort(Y_transform, Y_transform + N);

//         // Count the number of pairs
//         long long ans = 0;
//         int j = 0;

//         for (int i = 0; i < M; i++) {
//             while (j < N && X_transform[i] > Y_transform[j]) {
//                 j++;
//             }
//             ans += j;
//         }

//         return ans;
//     }


//sample input and output
//Input: 
//M = 3, X[] = [2 1 6] 
//N = 2, Y[] = [1 5]
//Output: 3
//Explanation: 
//The pairs which follow xy > yx are 
//as such: 21 > 12,  25 > 52 and 61 > 16 .
