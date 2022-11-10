class Solution {
public:
    string removeDuplicates(string s) {
        
        stack<char>st;
        
        for(int i=0;i<s.size();i++){
            
            if(st.size()){
                
                char prv = st.top();
                
                if(prv==s[i])
                    st.pop();
                
                else
                    st.push(s[i]);
                
            }
            else{
                st.push(s[i]);
            }
            
        }
        
        string ret = "";
        
        while(st.size()){
            
            ret+=st.top();
            st.pop();
        }
        
        reverse(ret.begin(), ret.end());
        
        return ret;
    }
};