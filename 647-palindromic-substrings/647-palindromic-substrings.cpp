class Solution {
public:
    int countSubstrings(string s) {
        int res=0;
        for(int i=0;i<s.size();i++){
            
            for(int j=i+1;j<s.size();j++){
                
                int beg=i,en=j;
                bool ok=1;
                
                while(beg<en){
                    if(s[beg]!=s[en]){
                        ok=0;break;
                    }
                    beg++,en--;
                }
                if(ok)res++;
            }
            res++;
        }
        return res;
    }
    
};