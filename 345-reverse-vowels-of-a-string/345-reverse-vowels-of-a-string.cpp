class Solution {
public:
    string reverseVowels(string s) {
        
        string vow = "aeiou";
        
        int l = 0, r = s.size()-1;
        
        while(l<r){
            
            if(vow.find(tolower(s[l]))<vow.size() && vow.find(tolower(s[r]))<vow.size()){
                swap(s[l], s[r]);
                l++, r--;
            }
            else if(vow.find(tolower(s[l]))>=vow.size())
                l++;
            
            else if(vow.find(tolower(s[r]))>=vow.size())
                r--;
            
            else
                continue;
        }
        
        return s;
    }
};