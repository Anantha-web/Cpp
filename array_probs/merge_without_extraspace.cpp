 //Function to merge the arrays.
        void merge(long long arr1[], long long arr2[], int n, int m) 
        { 
            // code here 
            int i=n-1, j=0;
            
            while(i>=0 && j<m){
                if(arr1[i] >= arr2[j]){
                    swap(arr1[i], arr2[j]);
                    i--;
                    j++;
                }
                else{
                    break;
                }
            }
            sort(arr1, arr1+n);
            sort(arr2, arr2+m);
            
        }

//merging two sorted arrays
//APPROACH: To merge the arrays in-place without extra spaces, we can start from the end of arr1 and the beginning of arr2. We compare the elements at these positions and swap them if necessary. By repeatedly doing this, we ensure that the larger elements are moved to the end of arr1 and the smaller elements are moved to the beginning of arr2. Finally, we sort both arrays to obtain the merged sorted order.
