class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        
        int n = image.size();
        int m = 0;
        
        if(n)
            m = image[0].size();
        
        vector<vector<int>>vp(n,vector<int>(m));
        
        queue<pair<int,int>>qu;
        qu.push(pair<int,int>(sr, sc));
        
        int prev = image[sr][sc];
        
        while(!qu.empty()){
            
            pair<int, int> node = qu.front();
            qu.pop();
            
            if(node.first<0 || node.first>=n || node.second<0 || node.second>=m)
                continue;
            
            if(image[node.first][node.second] != prev || vp[node.first][node.second])
                continue;
            
            
            
            image[node.first][node.second] = color;
            vp[node.first][node.second] = 1;
            
            qu.push(pair<int,int>(node.first, node.second+1));
            qu.push(pair<int,int>(node.first, node.second-1));
            qu.push(pair<int,int>(node.first+1, node.second));
            qu.push(pair<int,int>(node.first-1, node.second));
            
        }
        
        return image;
        
    }
};