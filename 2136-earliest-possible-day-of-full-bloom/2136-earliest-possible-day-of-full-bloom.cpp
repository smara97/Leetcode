class Solution {
public:
    int earliestFullBloom(vector<int>& plantTime, vector<int>& growTime) {
        
        int N = plantTime.size();
        vector<pair<int,int>>vp(N);
        
        for(int i=0;i<N;i++)
            vp[i] = pair<int,int>{-growTime[i], plantTime[i]};
        
        sort(vp.begin(), vp.end());
        
        int  plantime = 0, res = 0;
        
        for(int i=0;i<N;i++){
            
            plantime+=vp[i].second;
            res = max(res, (-vp[i].first) + plantime);
        }
        
        return res;
    }
};