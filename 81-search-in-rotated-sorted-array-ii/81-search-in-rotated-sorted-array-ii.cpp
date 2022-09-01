class Solution {
public:
    
    bool exist(vector<int>& nums, int l, int r, int target){
        
        while(l<=r){
            
            int mid = (l+r)/2;
            
            if(nums[mid]>target)
                r = mid-1;
            
            else if(nums[mid]<target)
                l = mid+1;
            
            else
                return true;
        }
        
        return false;
    }
    
    bool search(vector<int>& nums, int target) {
       
        
        int pv = nums.size();
        int l = 0, r = nums.size()-1;
        
        int prv = 1e6;
        
        while(l<=r){
            
            int mid = (l + r)/2;
            
            if(nums[l]<prv)
                pv = l;
            
            if(nums[mid] == target)
                return true;
            
            if(nums[mid]==nums[l] )
                l++;
            
            else if(nums[mid]==nums[r])
                r--;
            
            else{
                
                if(nums[mid]>nums[l]){
                    l = mid+1;
                    prv = nums[mid];
                }

                else{
                    pv = mid;
                    r = mid-1;
                }
            }
        }
        
        if(pv-1>=0)
            if(exist(nums, 0, pv-1, target))
                return true;
        
        if(exist(nums, pv, nums.size()-1, target))
            return true;
        
        return false;
        
    }
};