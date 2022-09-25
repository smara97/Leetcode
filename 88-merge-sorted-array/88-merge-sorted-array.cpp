class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
        
        int l = 0, r = 0, indx = 0;
        vector<int>temp(m);
        
        for(int i=0;i<m;i++)
            temp[i] = nums1[i];
        
        while(l<m && r<n){
            
            if(temp[l]<=nums2[r]){
                nums1[indx] = temp[l];
                l++;
            }
            else{
                nums1[indx] = nums2[r];
                r++;
            }
            
            indx++;
        }
        
        
        while(l<m){
            nums1[indx] = temp[l];
            l++;
            indx++;
        }
        
        while(r<n){
            nums1[indx] = nums2[r];
            r++;
            indx++;
        }
        
    }
};