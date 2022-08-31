class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        
        
        int N = mat.size();
        
        if(N==0)
            return {-1, -1};
        
        int M = mat[0].size();
        
        int x[] = {0, 0, -1, 1};
        int y[] = {-1, 1, 0, 0};
        
        vector<pair<int,int>> nums;
        
        for(int i=0;i<N;i++)
            for(int j=0;j<M;j++)
                nums.push_back(pair<int, int>(mat[i][j], i*M + j));
        
        
        sort(nums.begin(), nums.end());
        
        for(int i = int(nums.size())-1; i>=0; i--){
            
            int xu = nums[i].second/M;
            int yu = nums[i].second%M;
            
            bool Large = true;
            
            for(int j=0;j<4;j++){
                
                int xc = xu+x[j];
                int yr = yu+y[j];
                
                if(xc >= 0 && xc < N && yr>=0 && yr<M){
                    Large&=bool(mat[xu][yu]>mat[xc][yr]);
                }
                
            }
            
            if(Large)
                return {xu, yu};
        }
        return {-1,-1};
    }
};