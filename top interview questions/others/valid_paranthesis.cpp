class Solution {
public:
    map<char, char> openerz = {
        {'}', '{'}, {')', '('}, {']', '['}
    };

    bool isValid(string s) {
        stack<char> stk;
        for (const char& c : s) {
            if (c == '(' || c == '{' || c == '[') {
                stk.push(c);
            } else {
                if (!stk.empty() && (openerz.at(c) == stk.top())) {
                    stk.pop();
                } else {
                    return false;
                }
            }
        }
        return stk.empty();
    }
};



// Input: s = "()"
// Output: true

// Input: s = "()[]{}"
// Output: true

// 1 <= s.length <= 104
// s consists of parentheses only '()[]{}'.

  
