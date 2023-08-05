#include<iostream>
using namespace std;

void reachHome(int step, int destination){
  //base case
  if(step == destination)
    return;
  //processing
  step ++;
  reachHome(step, destination);
}

int main(){
  int step =1;
  int destination = 10;

  cout<<endl;

  //func calling 
  reachHome(step, destiantion);

}


//climbing stairs problem from leetcode

//function
void Climbstairs(int n){
  if(n==0 || n == 1){
    return 1;
  }
  return Climbstairs(n-1) + Climbstairs(n-2);
}
