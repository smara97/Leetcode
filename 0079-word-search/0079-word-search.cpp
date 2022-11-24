class Solution {
    
    int visit[205][205];
public:
    
    bool solve(int r, int c, vector<vector<char>>& board,int indx,string word) {
        
        if(indx == word.length()) return true;
        if(r < 0 || c < 0 || r >= board.size() || c >= board[0].size()) return false;
        if(word[indx] != board[r][c]) return false;
       
        char temp = board[r][c];
        board[r][c] = '*';
        
        if(solve(r + 1, c,board, indx + 1,word) ||
            solve(r, c+1,board, indx + 1,word) ||
            solve(r, c-1,board, indx + 1,word) ||
            solve(r - 1, c,board, indx + 1,word))
            return true;
        
        board[r][c] = temp;
        return false;
        
        
    }
    
    bool exist(vector<vector<char>>& board, string word) {
        
        for(int i=0;i<board.size();i++){
            for(int j=0;j<board[i].size();j++){
                if(board[i][j]==word[0])
                    if(solve(i,j,board,0,word))
                        return true;
            }
        }
        return false;
    }
};