class Solution {
public:
    bool halvesAreAlike(string s) {
        
        char vowels[10] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
        int mid = s.size() / 2, ans = 0;
        for (int i = 0, j = mid; i < mid; i++, j++) {
            
            for(auto e:vowels){
                if (e==s[i]) ans++;
                if (e==s[j]) ans--;
            }
        }
        return ans == 0;
    }
};