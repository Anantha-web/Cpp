class Solution {
public:
    int minCostConnectPoints(vector<vector<int>>& points) {
        int n = points.size();
        vector <int> visted(n,false);
        //pq to get the min edge
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<>> pq;
        //adding all edge weights into pq
        for (int i = 1;i<n;i++){
            int distance =abs(points[0][0] -points[i][0])+abs(points[0][1] -points[i][1]); 
            pq.push({distance,i});
        }

        int ans = 0;
        int k =1;
        while(k<n){
            auto [distance,to] = pq.top();
            pq.pop();
            // if the vertex is already present in the tree skip it
            if(visted[to] == true){
                continue;
            }
            visted[to] = true;
            ans = ans+distance;
            k++;
            //relax all the current node path, add the neighbors to pq if they are not yet visited
            for (int i = 1;i<n;i++){
                if(visted[i] == false){
                int distance =abs(points[to][0] -points[i][0])+abs(points[to][1] -points[i][1]); 
                pq.push({distance,i});
                }
            }
        }
        return ans;
    }
};
