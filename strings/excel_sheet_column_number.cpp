class Solution {
public:
    string convertToTitle(int columnNumber) {
        
        
        string ans;
        
        while(columnNumber){
            if(columnNumber%26 == 0){
                ans +='Z';
                columnNumber--;
            }
            else{
                ans += (columnNumber%26-1) + 'A';
            }
            columnNumber/=26;
        }
        
        reverse(begin(ans),end(ans));
        
        return ans;
        
    }
};


// A -> 1
// B -> 2
// C -> 3
// ...
// Z -> 26
// AA -> 27
// AB -> 28 
// ...


// Input: columnNumber = 1
// Output: "A"

// Input: columnNumber = 28
// Output: "AB"

// Input: columnNumber = 701
// Output: "ZY"
  
