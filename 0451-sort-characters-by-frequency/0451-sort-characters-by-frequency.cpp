class Solution {
public:
    string frequencySort(string s) {
        
        map<char,int>mp;
        for(auto e:s)
            mp[e]++;
        
        vector<pair<int, char>>vp;
        for(auto e:mp)
            vp.push_back({e.second, e.first});
        
        sort(vp.begin(), vp.end());
        reverse(vp.begin(), vp.end());
        
        string ret = "";
        for(auto e:vp)
            for(int i = 0;i<e.first;i++)
                ret+=e.second;
            
        return ret;
        
    }
};