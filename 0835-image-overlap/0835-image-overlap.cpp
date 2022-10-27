class Solution {
public:
    
    
    int solve(int x, int y , vector<vector<int>>A, vector<vector<int>>B){
        
        int shiftL = 0, shiftR = 0, rRow = 0;
        
        for (int i = y; i < A.size(); i++) {
            
            int rCol = 0;
            
            for (int j = x; j < A.size(); j++) {
                
                if (A[i][j] == 1 && A[i][j] == B[rRow][rCol])
                    shiftL += 1;
                if (A[i][rCol] == 1 && A[i][rCol] == B[rRow][j])
                    shiftR += 1;
                rCol += 1;
                
            }
            rRow += 1;
        }
        
        return max(shiftL, shiftR);
        
    }
    
    int largestOverlap(vector<vector<int>>& img1, vector<vector<int>>& img2) {
        
        int maxOver = 0;
        
        for(int i=0;i<img1.size();i++){
            for(int j=0;j<img1.size();j++){
                
                maxOver = max(maxOver, solve(i, j , img1, img2));
                maxOver = max(maxOver, solve(i, j , img2, img1));
            }
        }
        
        return maxOver;
    }
};