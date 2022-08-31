class Solution {
public:
    
    
   
    vector<vector<int>>res ;
    
    void solve(int i, int N, vector<int>V, vector<int>nums){
        
        if(i>N)
            return ;
        
        res.push_back(V);
        
        for(int j=i;j<N;j++){
            
            V.push_back(nums[j]);
            solve(j+1, N, V, nums);
            V.pop_back();
        }
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        
        vector<int> V;
        solve(0, nums.size(), V, nums);
        
        return res;
    }
};