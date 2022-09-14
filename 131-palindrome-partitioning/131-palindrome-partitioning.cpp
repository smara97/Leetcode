class Solution {
public:
    
    vector<vector<string>>res;
    
    bool pland(string temp, int l, int r){
        
       while(l<r){
           
           if(temp[l]!=temp[r])
               return false;
           
           l++;
           r--;
       }
        return true;
        
    }
    
    void permutation(int indx, string temp, string s, int sz, int indxP, vector<string>subRres){
        
        if(indx>=sz){
            res.push_back(subRres);
            return ;
        }
        
        for(int i = indx;i<sz;i++){
            
            if(pland(s, indx, i)){
                string ss = s.substr(indx, i-indx+1);
                subRres.push_back(ss);
                permutation(i+1, ss, s, sz, indxP, subRres);
                subRres.pop_back();
            }
        }
    }
    
    vector<vector<string>> partition(string s) {
        
        res.clear();
        vector<string>temp;
        
        permutation(0, "", s, s.size(), 0, temp);
        
        return res;
    }
};