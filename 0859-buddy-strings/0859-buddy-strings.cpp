class Solution {
public:
    bool buddyStrings(string s, string goal) {
        
        if(s.size()!=goal.size())
            return false;
        
        if(s==goal){
            sort(s.begin(), s.end());
            for(int i=0;i<s.size()-1;i++)
                if(s[i]==s[i+1])
                    return true;
            return false;
        }
        
        bool ok = false;
        int first = -1, second = -1 ;
        
        for(int i=0;i<s.size();i++){
            
            if(s[i]!=goal[i]){
                if(first!=-1){
                    if(second!=-1)
                        return false;
                    else
                        second = i;
                }
                else{
                    first = i;
                }
            }
        }
        
        return bool(first!=-1 && second !=-1 && goal[first]==s[second] && goal[second]==s[first]);   
    }
};