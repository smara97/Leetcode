class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        
        int N = nums.size();
        vector<int>v(N);
        
        for(int i=0;i<N;i++)
            v[i] = nums[nums[i]];
        
        return v;
    }
};