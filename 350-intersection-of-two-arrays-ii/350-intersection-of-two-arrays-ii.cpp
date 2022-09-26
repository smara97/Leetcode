class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
     
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        
        int l = 0, r = 0;
        
        vector<int>ints;
        
        while(l<nums1.size() && r<nums2.size()){
            
            if(nums1[l]==nums2[r]){
                ints.push_back(nums2[r]);
                l++;
                r++;
            }
            
            else if(nums1[l]<nums2[r])
                l++;
            
            else
                r++;
        }
        
        return ints;
    }
};