class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        
        
        int N = nums.size();
        int sumAll = 0;
        
        if(N==1)
            return false;
        
        map<int, int>mp;
        mp[0] = -1;
        
        for(int i=0;i<N;i++){
            
            sumAll+=nums[i];
            int rem = sumAll%k;
            
            if(mp.find(rem)!=mp.end()){
                
                if(i - mp[rem]>1)
                    return true;
                
                else
                    continue;
            }
            
            mp[rem] = i;
            
        }
        return false;
    }
};