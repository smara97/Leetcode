class Solution {
public:
    bool isUgly(int n) {
        
        while(n){
            if(n%2==0)
                n/=2;
            else
                break;
        }
        
        while(n){
            if(n%3==0)
                n/=3;
            else
                break;
        }
        
        while(n){
            if(n%5==0)
                n/=5;
            else
                break;
        }
        
        return true?n==1:false;
    }
};