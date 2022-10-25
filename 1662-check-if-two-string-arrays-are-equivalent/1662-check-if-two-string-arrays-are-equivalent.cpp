class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        
        pair<int,int>pi;
        pair<int,int>pj;
        
        pi = {0,0};
        pj = {0,0};
        
        while(pi.first<word1.size() && pj.first<word2.size()){
            
            if(pi.second>=word1[pi.first].size()){
                pi.second = 0;
                pi.first+=1;
            }
            
            if(pj.second>=word2[pj.first].size()){
                pj.second = 0;
                pj.first+=1;
            }
            
            if(pi.first>=word1.size() || pj.first>=word2.size())
                break;
            
            if (word1[pi.first][pi.second]!=word2[pj.first][pj.second])
                return false;
            
            pi.second+=1;
            pj.second+=1;
            
        }
        
        return pi.first==word1.size( )&& pj.first==word2.size();
    }
};