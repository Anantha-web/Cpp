 void rearrange(long long *arr, int n) 
    { 
    	
    	// Your code here
    	int i,j,k;
    	int max = arr[n-1]+1;
    	j =n-1;
    	for(i=0; i<n; i+=2){
    	    arr[i] = arr[i] + (arr[j]%max)*max;
    	    j--;
    	}
    	j=0;
    	for(i=1;i<n;i+=2){
    	    arr[i] = arr[i] + (arr[j]%max)*max;
    	    j++;
    	}
    	for(i=0;i<n;i++){
    	    arr[i] /= max;
    	}
    	 
    }

//Key concept :-

//# how to store 2 values at a single position ?
//# Higher values are at even position and lower values are at odd {indexing from zero} .

//Explaination

//let maxi = maximum_value of the array +1 =19+1=20 { +1 is done so that modulo never become zero }. below image explains how we can store 2 values at a single place . 
//We will have 2 loops one for manipulation of value at odd position and another for the manipulation of the value at  even position.
//Formula used:- arr[i]=arr[i]+(arr[j]%maxi)*maxi;
//i->even/ odd index
//j->the index of the value which will be present finally in output array.{for manipulation part , see in my code} 
