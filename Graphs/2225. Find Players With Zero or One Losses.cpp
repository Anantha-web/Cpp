class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        
//         set<int> win,lose;
//         unordered_map<int,int> total;
        
//         for(auto it:matches){
//             win.insert(it[0]), lose.insert(it[1]), total[it[1]]++;
//         }
        
//         vector<int>v1,v2;
//         vector<vector<int>>answer;
        
//         for(auto it:win){
//             if(total.find(it) == total.end()){
//                 v1.push_back(it);
//             }
//         }
        
//         for(auto it:lose){
//             if(total[it] == 1){
//                 v2.push_back(it);
//             }
//         }
        
//         answer.push_back(v1);
//         answer.push_back(v2);
        
//         return answer;
        
        map<int,int> lost;
        for(auto m:matches){
            if(!lost.count(m[0])) lost[m[0]] =0;
            lost[m[1]]++;
        }
        
        vector<int> zero, ones;
        for(auto[k,l] : lost){
            if(l==0) zero.push_back(k);
            if(l==1) ones.push_back(k);
        }
        
        return {zero, ones};
        
    }
};
