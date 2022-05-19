class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        vector<int>ret;
        map<int,int>mp;
        
        for(int i=0;i<nums.size();i++)
            mp[nums[i]]=i;
        
        for(int i=0;i<nums.size();i++){
            
            int indx = i;
            if(mp[target-nums[i]])
                indx = mp[target-nums[i]];
            
            if(indx != i){
                ret.push_back(i);
                ret.push_back(indx);
                break;
            }
        }
            
        return ret;
    }
};