class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        
        int l = 0, r = nums.size()-1, res = -1;
        
        while(l<=r){
            
            int mid = l+(r-l)/2;
            
            if(nums[mid]<=target){
                
                res = mid;
                l = mid+1;
            }
            else
                r = mid-1;
        }
        
        if(res==-1 || nums[res]!=target)
            res++;
        
        return res;
    
    }
};