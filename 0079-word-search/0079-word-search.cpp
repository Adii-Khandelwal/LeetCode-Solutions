class Solution {
public:
    bool dfs(vector<vector<char>>& board, string &word,int i,int j,int n )
    {
        if(n==word.size())
        {
            return true;
        }
       if(i < 0 || i >= board.size() || j < 0 || j >= board[i].size() 
          || board[i][j] != word[n]) 
           return false;
        
        board[i][j]=0;
        
bool status = dfs(board, word, i + 1, j, n + 1) ||  //down
                        dfs(board, word, i, j + 1, n + 1) ||  //right
                        dfs(board, word, i - 1, j, n + 1) ||  //up
                        dfs(board, word, i, j - 1, n + 1);  //left
        
		//change the character back for other searches
        board[i][j] = word[n];
		
        return status;
        
        
    }
    
    bool exist(vector<vector<char>>& board, string word) {
        
        int k=word.size();
        int m=board.size();
        int n=board[0].size();
        
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(word[0]==board[i][j] and dfs(board,word,i,j,0))
                {
                    return true;
                
                }
            }
        }
       return false;
        
        
        
    }
};