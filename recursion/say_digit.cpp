#include<iostream>
using namespace std;

void sayDigit(int n, int arr[10]){
    // base case
    if(n ==0)
        return 0;  
    int digit = n % 10;
    n = n/10;
    cout << "digit" << arr[];

}

int main(){
  int n = 2;
  int arr[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"}

  cout<<endl;

  // calling the function
  sayDigit(n, arr[10]);

}
  
