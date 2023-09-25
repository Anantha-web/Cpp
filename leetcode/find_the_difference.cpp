class Solution {
public:
    char findTheDifference(string s, string t) {
        
        int n = s.size();
        int diff = 0;
        for (int i = 0; i < n; i++) {
            diff += t[i];
            diff -= s[i];
        }
        diff += t[n];
        
        return diff;
        
    }
};
