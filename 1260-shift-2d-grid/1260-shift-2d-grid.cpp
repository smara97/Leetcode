class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        
        int n = grid.size();
        int m = grid[0].size();
        
        vector<int>v;
        
        for(auto i:grid)
            for(auto j :i)
                v.push_back(j);
                
        for(int i=0;i<v.size();i++){
            
            int kp = (i+k)%v.size();
            grid[kp/m][kp%m] = v[i];
            
        }
        
        return grid;
    }
};