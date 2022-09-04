class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        
        int n = grid.size();
        int m = grid[0].size();
        
        vector<int>v;
        
        for(auto i:grid)
            for(auto j :i)
                v.push_back(j);
        
        vector<int>swp(v.size());
        
        for(int i=0;i<v.size();i++)
            swp[(i+k)%v.size()] = v[i];
        
        int indx = 0;
        
        for(int i=0;i<n;i++)
            for(int j=0;j<m;j++)
                grid[i][j] = swp[indx], indx++;
        
        return grid;
    }
};