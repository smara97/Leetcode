class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        
        stack<long long>st;
        string ops[] = {"*", "-", "+", "/"};
        
        for(int i=0;i<tokens.size();i++){
            
            bool opsc = false;
            
            for(auto e:ops)
                opsc|=bool(e==tokens[i]);
            
            if(opsc){
                
                long long S = st.top();
                st.pop();
                long long F = st.top();
                st.pop();
                
                if(tokens[i] == "*")
                    st.push(F*S);
                
                if(tokens[i] == "+")
                    st.push(F+S);
                
                if(tokens[i] == "/")
                    st.push(F/S);
                
                if(tokens[i] == "-")
                    st.push(F-S);
            }
            
            else{
                
                stringstream ss;
                ss<<tokens[i];
                int N ;
                ss>>N;
                st.push(N);
                    
            }
        }
        
        return st.top();
    }
};