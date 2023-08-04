// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

// class Solution {
// public:
//     int firstBadVersion(int n) {
//         if(n==1){
//             return 1;
//         }
//        for(int i = 0; i< n; i++){
           
        
//     }
// };


class Solution {
 public:
  int firstBadVersion(int n) {
    int lowest_bad = n;
    int highest_true = 0;
    while (highest_true != lowest_bad - 1) {
      // preventing int overflow
      int check = lowest_bad + (highest_true - lowest_bad) / 2;
      if (!isBadVersion(check)) {
        highest_true = check;
      } else {
        lowest_bad = check;
      }
    }
    return lowest_bad;
  }
};


// Input: n = 5, bad = 4
// Output: 4
// Explanation:
// call isBadVersion(3) -> false
// call isBadVersion(5) -> true
// call isBadVersion(4) -> true
// Then 4 is the first bad version.


// Input: n = 1, bad = 1
// Output: 1
  
