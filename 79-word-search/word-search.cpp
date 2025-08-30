class Solution {
public:
    bool dfs(vector<vector<char>>&board, string& word, int i, int x, int y){
        if(i==word.size())
            return true;
        if(x<0 || x>=board.size() || y<0 || y>=board[0].size() || board[x][y]!=word[i])
            return false;
        char temp=board[x][y];
        board[x][y]='#';
        bool found=dfs(board, word, i+1, x-1, y) || dfs(board, word, i+1, x+1, y)||
                    dfs(board, word, i+1, x, y-1) || dfs(board, word, i+1, x, y+1);
        board[x][y]=temp;
        return found;
    }
    bool exist(vector<vector<char>>& board, string word) {
        int m=board.size(), n=board[0].size();
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(board[i][j]==word[0] && dfs(board, word, 0, i, j))
                    return true;
            }
        }
        return false;
    }
};