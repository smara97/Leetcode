class Solution {
public:
    
    bool sum_right(int r,int c, vector<vector<int>> grid){
        
        map<int,int>mp;
        map<int,int>nums;
        
        for(int i=r-1;i<=r+1;i++){
            
            int sum = 0;
            
            for(int j=c-1;j<=c+1;j++){
                
                sum+=grid[i][j];
                nums[grid[i][j]]++;
            }
            
            mp[sum]++;
        }
        
        for(int i=c-1;i<=c+1;i++){
            
            int sum = 0;
            
            for(int j=r-1;j<=r+1;j++){
                sum+=grid[j][i];
            }
            
            mp[sum]++;
        }
        
        int dig = grid[r][c] + grid[r-1][c-1] + grid[r+1][c+1];
        mp[dig]++;
        
        dig = grid[r][c] + grid[r-1][c+1] + grid[r+1][c-1];
        mp[dig]++;
        
        for(auto e:nums){
            if(e.second>1 || e.first<1 || e.first>9)
                return false;
        }
        return true?mp.size()==1:false;
        
    }
    
    int numMagicSquaresInside(vector<vector<int>>& grid) {
        
        int res = 0;
        
        for(int i=1;i<grid.size()-1;i++){
            for(int j=1;j<grid[0].size()-1;j++){
                res+=bool(sum_right(i, j, grid));
            }
        }
        
        return res;
    }
};