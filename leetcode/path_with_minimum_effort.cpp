class Solution {
public:
    
    // {[1,0] [0,-1] [-1,0] [0,1]}
    // it will help to traverse or check in other avaliable direction
    int dir[5] = {1,0,-1,0,1};
    
    int minimumEffortPath(vector<vector<int>>& heights) 
    {
        // extracting the rows and number of columns for calculations
        int row = heights.size();
        int col = heights[0].size();
        
        // we are going to use priority queue (MIN HEAP) here because according to question we need to return min number of efforts 
        // to reach (0,0) to (row-1,col-1)
        
        priority_queue<vector<int> ,vector<vector<int>> ,greater<vector<int>>> pq;
         
        // {efforts, row, col}
        pq.push({0,0,0});
        
        // using bfs
        while(!pq.empty())
        {
            // taking out the top queue vector
            vector<int> tmp = pq.top();
            pq.pop();
            
            // extracting the usable information
            int efforts = tmp[0];
            int r       = tmp[1];
            int c       = tmp[2];
            
            // if we reach to our destination
            if(r==row-1 && c==col-1)
                return efforts;
            
            // if we cross the boundary
            if(r<0 or c<0 or r>=row or c>=col or heights[r][c]==0)
                continue;
            
            // now we will need to check for the directions from where we can move
            for(int i=0;i<4;i++)
            {
                int next_r = r+dir[i];
                int next_c = c+dir[i+1];
                
                // check for the bounds
                if(next_r<row && next_c<col && next_r>=0 && next_c>=0)
                {
                    // pushing the values into our priority queue for all the avaliable directions
                    // and this will automatically gave the min effort value at the top
                    // also we will use max function here for finding the max consecutive difference for efforts
                    pq.push({max(efforts , abs(heights[r][c] - heights[next_r][next_c])) , next_r , next_c});
                }
            }
            
            // make cuurent cell 0 , so we do not traverse this cell again
            heights[r][c] = 0;
        }
        
        return 0;
    }
};
