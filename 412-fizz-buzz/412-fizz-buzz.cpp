class Solution {
public:
    vector<string> fizzBuzz(int n) {
        
        vector<string>vs(n);
                
        for(int i=1;i<=n;i++){
            
            if((i%3) == 0 && (i%5) == 0 )
                vs[i-1] = "FizzBuzz";
            else if((i%3) == 0)
                vs[i-1] = "Fizz";
            else if((i%5) == 0)
                vs[i-1] = "Buzz";
            else{
                stringstream stream;
                stream << i;
                stream >> vs[i-1];
            }
        }
        
        return vs;
    }
};