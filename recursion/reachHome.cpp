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
