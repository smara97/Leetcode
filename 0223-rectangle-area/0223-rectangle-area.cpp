class Solution {
public:
    int computeArea(int ax1, int ay1, int ax2, int ay2, int bx1, int by1, int bx2, int by2) {
     
        
        int aArea = (ax2 - ax1)*(ay2 - ay1);
        int bArea = (bx2 - bx1)*(by2 - by1);
        
        int reqArea = 0, commonArea = 0;
        
        int xU = min(ax2, bx2) - max(ax1, bx1), yU = min(ay2, by2) - max(ay1, by1);
        
        if(xU>0 && yU>0)
            commonArea = xU*yU;
        
        reqArea = (aArea + bArea) - commonArea;
        
        return reqArea;
        
    }
};