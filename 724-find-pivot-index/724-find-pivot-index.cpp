class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        
        int sumAl = 0;
        
        for(auto e:nums)
            sumAl+=e;
        
        int left = 0;
        
        for(int i=0;i<nums.size();i++){
            
            int right = sumAl-left-nums[i];
            
            if(left == right)
                return i;
            
            left+=nums[i];
            
        }
        
        return -1;
    }
};