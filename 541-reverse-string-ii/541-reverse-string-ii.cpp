class Solution {
public:
    string reverseStr(string s, int k) {
        
        int sz = s.size();
        
        for(int i=0;i<sz;i+=(2*k)){
            
            int sz_s = (i+k)-1;
            int j = i;
            
            if(sz_s>=sz)
                sz_s = sz-1;
            
            while(j<sz_s){
                swap(s[j], s[sz_s]);
                sz_s--;
                j++;
            }
               
        }
        
        return s;
    }
};