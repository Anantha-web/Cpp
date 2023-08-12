class Solution {
public:
    int addDigits(int num) {
        return 1 + (num - 1) % 9;  
    }
};

// class Solution {
// public:
//     int addDigits(int num) {
//         while(true){
//             string s1 = to_string(num);
//             if(s1.length() == 1)break;
//             num = 0;
//             for(int i = 0;i < s1.length();i++){
//                 num += s1[i] - '0';
//             }

//         }
//         return num;
//     }
// };


// Input: num = 38
// Output: 2
// Explanation: The process is
// 38 --> 3 + 8 --> 11
// 11 --> 1 + 1 --> 2 
// Since 2 has only one digit, return it.


// Input: num = 0
// Output: 0
