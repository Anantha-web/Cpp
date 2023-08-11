class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {
        
    int ans=0;
    unordered_map<int,int>mp;
    for(int a:nums1)
        for(int b:nums2)
            mp[a+b]++;
    
    for(int c:nums3)
        for(int d:nums4)
            ans+=mp[-(c+d)];
    
    return ans;
    }
        
//         unordered_map<int,int> hash;
        
//         int n = nums1.size();
//         int res =0;
        
//         for(int i = 0; i<n; i++){
//             for(int j =0; j<n; i++){
//                 //increament the hashtable at sum of pairs
//                 hash[nums1[i] + nums2[j]] ++;
//             }
//         }
        
//           for(int i = 0; i<n; i++){
//             for(int j =0; j<n; i++){
//                 //increament the hashtable at sum of pairs
//                 res = res + hash[-(nums3[i] + nums4[j])];
//             }
//         }
//         return res;
//     }
        
        
//         unordered_map<int, int> hash;
//         int n = p.size();
//         int ans = 0;
        
//         for(int i=0; i<n; i++) {
//             for(int j=0; j<n; j++) {
//                 // Increment the hashtable at the sum of the pair
//                 hash[p[i] + q[j]]++;
//             }
//         }
        
//         for(int i=0; i<n; i++) {
//             for(int j=0; j<n; j++) {
//                 // Check if the negative of curr sum of the pair exists in the hash table. Then they will add upto zero. 
//                 // i.e hash[p[w] + q[x]] + hash[r[y] + s[z]] == 0.
//                 // But we dont want zero. We want no. of two touples. Hence we store the value in hashtable in ans. If it is present in hashtable it will get stored in ans, else it will get neglected cosidering it as a zero.
//                 ans = ans + hash[-(r[i] + s[j])];
//             }
//         }
        
//         return ans;
        
//     }
        
};
