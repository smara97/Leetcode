class Solution {
public:
    
    int LB_(vector<int>row, int t, int sz){
        
        int l = 0, r = sz-1, res = 0;
        
        while(l<=r){
            
            int mid = l + (r-l)/2;
            
            if(row[mid]<=t)
                res = mid+1, l = mid+1;
            else
                r = mid-1;
        
        }
        
        return res;
        
    }
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        
        int N = matrix.size(), res = matrix[0][0] ;
        
        int l = matrix[0][0], r = matrix[N-1][N-1];
        
        while(l<=r){
            
            int mid = l + (r-l)/2, cnt = 0;     
            
            for(int i=0;i<N;i++){    
                
                int mn = LB_(matrix[i], mid, N);
                
                if(mn>=0)
                    cnt+=mn;
            }
            
            if(cnt>=k){
                r = mid-1;
                res = mid;
            }
            else
                l = mid+1;
        }
        
        return res;
    }
};