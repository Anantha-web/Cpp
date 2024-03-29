class Solution {
public:
    vector<string> fizzBuzz(int n) {
        
        vector<string> fizzBuzz;
        string temp;
            for(int i=1; i <=n; i++){
                string temp = "";
                if( i % 3 == 0 || i % 5 == 0){
                    if( i % 3 == 0 )
                        temp = "Fizz";
                    if ( i % 5 == 0)
                        temp = temp + "Buzz";
                }
                else
                    temp = to_string(i);
                fizzBuzz.push_back(temp);
            }
        return fizzBuzz;
    }
};


// Input: n = 3
// Output: ["1","2","Fizz"]


// Input: n = 5
// Output: ["1","2","Fizz","4","Buzz"]

//   Input: n = 15
// Output: ["1","2","Fizz","4","Buzz","Fizz","7","8","Fizz","Buzz","11","Fizz","13","14","FizzBuzz"]

  
