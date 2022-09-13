class Solution {
public:
    
    vector<string>ret;
    
    bool ok(string temp){
        
        int par = 0;
        
        for(auto e:temp){
            if(e=='(')
                par++;
            else{
                par--;
                if(par<0)
                    return false;
            }
        }
        
        if(par)
            return false;
        
        return true;
    }
    void gen(string temp, int n){
        
        if(temp.size()==n*2){
            
            if(ok(temp))
                ret.push_back(temp);
            
            return ;
        }
        
        gen(temp+'(', n);
        gen(temp+')', n);
    }
    vector<string> generateParenthesis(int n) {
        
        ret.clear();
        gen("", n);
        return ret;
    }
};