class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        
        int len_n = nums.size();
        
        int l = 0, r = len_n-1;
        vector<int>ret(len_n);
        
        
        for(int i=0;i<len_n;i++){
            
            if(abs(nums[r])>=abs(nums[l])){
                ret[len_n-i-1] = nums[r]*nums[r];
                r--;
            }
            else{
                ret[len_n-i-1] = nums[l]*nums[l];
                l++;
            }
        }
        
        return ret;
    }
};