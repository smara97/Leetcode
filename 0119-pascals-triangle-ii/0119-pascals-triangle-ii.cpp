class Solution {
public:
    vector<int> getRow(int rowIndex) {
        
        vector<vector<int>>adj(1003, vector<int>(1003));
        
        int indR = 1003/2, indB = (1003/2) - 1, indE = (1003/2) + 1;
        
        adj[0][indR] = 1;
        
        for(int i=1;i<=rowIndex;i++){
            
            for(int j = indB;j<=indE;j++){
                adj[i][j] = adj[i-1][j+1]+adj[i-1][j-1];
            }
            
            indB--;
            indE++;
        }
        
        vector<int>ret;
        
        for(int j=0;j<adj[0].size();j++)
            if(adj[rowIndex][j])
                ret.push_back(adj[rowIndex][j]);
        
        return ret;        
        
    }
};