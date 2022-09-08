class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        
        int prev = 0, Fsum = 0, Csum = 0;
        
        for(int i=0;i<nums.size();i++){
            
            if(prev>=nums[i])
                Csum = nums[i];
            
            else{
                Csum+=nums[i];
                Fsum = max(Fsum, Csum);
            }
            
            prev = nums[i];
        }
        
        
        return Fsum;
    }
};