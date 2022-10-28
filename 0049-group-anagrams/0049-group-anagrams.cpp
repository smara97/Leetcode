class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        vector<vector<string>>ret;
        
        map<string, vector<string>>mp;
        
        int N = strs.size();
        
        for(int i=0;i<N;i++){
            
            vector<int>freq(27, 0);
            
            for(int j=0;j<strs[i].size();j++){
                freq[strs[i][j]-'a']++;
            }
            
            string temp = "";
            
            for(int j = 0;j<27;j++){
                
                for(int k=0;k<freq[j]+1;k++)
                    temp+=char('a'+freq[j]);
            }
            
            if(mp.find(temp)!=mp.end())
                mp[temp].push_back(strs[i]);
            
            else{
                vector<string>vs = {strs[i]};
                mp[temp] = vs;
            }
        }
        
        for(auto e:mp){
            
            vector<string>vst;
            
            for(int i=0;i<e.second.size();i++){
                vst.push_back(e.second[i]);
            }
            
            ret.push_back(vst);
        }
        
        return ret;
    }
};