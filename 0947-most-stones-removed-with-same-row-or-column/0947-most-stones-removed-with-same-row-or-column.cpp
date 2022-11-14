class Solution {
public:
    
    int connectComponent(vector<vector<int>>& stones, vector<int>& vis, int u, int n){
        
        vis[u] = 1;
        int CC = 0;
        
        for(int i=0;i<n;i++){
            
            if(i!=u && vis[i]==0){
                
                if(stones[i][0] == stones[u][0] ||stones[i][1] == stones[u][1] )
                    CC += connectComponent(stones, vis, i, n)+1;
            }
            
        }
        return CC;
    }
    
    int removeStones(vector<vector<int>>& stones) {
        
        int n = stones.size(), result = 0;
        vector<int>vis(1e3+2);
        
        for(int i=0;i<n;i++){
            if(vis[i]==0){
                result+=connectComponent(stones, vis, i, n);
            }
        }
        
        return result;
    }
};