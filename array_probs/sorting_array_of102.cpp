void sort012(int a[], int n)
    {
        // code here 
        int min = a[0];
        for (int j = 1; j<n;j++) {
            if(a[j]>min) {
                min = a[j];
                
            } 
            else {
             int temp = a[j];
             a[j] = a[j-1];
             a[j-1] = temp;
            }
        }

    }

// void sort012(int a[], int n)
//     {
//         // code here 
//         int count1=0;
//         int count2=0;
//         int count3=0;
//         for(int i=0;i<n;i++){
//             if(a[i]==0){
//                 count1++;
//             }
//             else if(a[i]==1){
//                 count2++;
//             }
//             else if(a[i]==2){
//                 count3++;
//             }
//         }
//         int i=0;
//         while(count1>0){
//             a[i++]=0;
//             count1--;
//         }
//          while(count2>0){
//             a[i++]=1;
//             count2--;
//         }
//          while(count3>0){
//             a[i++]=2;
//             count3--;
//         }


//O(N) solution
        
    }
