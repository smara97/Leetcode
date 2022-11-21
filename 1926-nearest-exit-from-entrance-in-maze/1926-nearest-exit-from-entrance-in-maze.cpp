class Solution {
public:
    
    vector<int>xs = {0, 0, -1, 1};
    vector<int>ys = {1, -1, 0, 0};
    
    int nearestExit(vector<vector<char>>& maze, vector<int>& entrance) {
        
        int n = maze.size();
        int m = 0;
        
        if(n>0)
            m = maze[0].size();
        
        queue<vector<int>>qv;
        int vis[1003][1003];
        
        memset(vis, 0, sizeof(vis));
        
        qv.push({entrance[0], entrance[1], 0});
        vis[entrance[0]][entrance[1]] = 1;
        
        int res = 1e5;
        
        while(qv.size()){
            
            vector<int>temp = qv.front();
            
            qv.pop();
            
            for(int i=0;i<4;i++){
                
                int x = xs[i]+temp[0];
                int y = ys[i]+temp[1];
                
                if(x>=n || y>=m || x<0 || y<0){
                    if(temp[2]>0)
                        res = min(res, temp[2]);
                }
                
                else if(maze[x][y] !='+'){
                    if(vis[x][y] == 0)
                        qv.push({x, y, temp[2]+1});
                        vis[x][y] = 1;
                }
            }
            
        }
        
        if(res==1e5)
            return -1;
        
        return res;
    }
};