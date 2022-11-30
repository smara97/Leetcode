class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        
        vector<int>freq(1e4+5);
        map<int, int>mp;
        
        for(auto e:arr)
            mp[e]++;
        
        for(auto e:mp){
            if(freq[e.second])
                return false;
            else
                freq[e.second] = 1;
        }
        
        return true;
    }
};