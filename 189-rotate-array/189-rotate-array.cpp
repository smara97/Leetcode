class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        
        int ln = nums.size();
        
        if(k==0 || k%ln == 0)
            return ;
        
        int st = 0, indx = k%ln, cnt = 0, temp = nums[0];
        
        while(cnt<ln){
            
            swap(temp, nums[indx]);
            indx = (indx+k)%ln;
            
            if (indx == st)
            {
                nums[indx] = temp;
                indx = (indx + 1) % ln;
                st = indx;
                temp = nums[st];
            }
            cnt += 1;
        }
    }
};