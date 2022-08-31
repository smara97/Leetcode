class Solution {
public:
    
    vector<vector<int>> generateMatrix(int n) {
    
        int k = 1;
        
        int br = 0, er = n-1;
        int bc = 0, ec = n-1;
        
        int curR = 0, curC = 0;
        
        int Pv = 1;
        
        bool inC = true;
        
        vector<vector<int>>res(n, vector<int>(n));
        
        while(k<=n*n){
            
            while(curR>=br && curR<=er && curC>= bc && curC<= ec){
                
                res[curR][curC] = k;
                
                k++;
                
                if(inC)
                    curC+=Pv;
                
                else
                    curR+=Pv;
            }
            
            
            if(inC){
                
                if(Pv>0){
                    br++;
                    curC = ec;
                    curR = br;
                }
                    
                else{
                    er--;
                    curC = bc;
                    curR = er;
                }
                
                inC = false;
            }
            
            else{
                
                if(Pv>0){
                    ec--;
                    curR = er;
                    curC = ec;
                }
                
                else{
                    bc++;
                    curR = br;
                    curC = bc;
                }
                
                Pv*=-1;
                inC = true;
            }
            
        }
        
        return res;
    }
    
};