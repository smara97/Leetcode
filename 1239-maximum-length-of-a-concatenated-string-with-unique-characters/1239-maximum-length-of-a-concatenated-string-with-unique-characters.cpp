class Solution {
public:
    
    int res = 0;
    
    void solve(int indx, vector<string>vs, string temp){
                
        vector<int>mpc(26, 0);
        
        for(auto e:temp){
            
            mpc[e-'a']++;
            if(mpc[e-'a']>1)
                return ;
        }
        
        res = max(res, int(temp.size()));
        
        if(indx>=vs.size())
            return ;
        
        solve(indx+1, vs, temp + vs[indx]);
        solve(indx+1, vs, temp);
    }
    
    int maxLength(vector<string>& arr) {
        
        solve(0, arr, "");
        
        return res;
    }
}; 