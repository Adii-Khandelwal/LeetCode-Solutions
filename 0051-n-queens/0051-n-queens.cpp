class Solution {
public:
        vector<vector<string>>ans;
    
    bool issafe(int row,int col,vector<string>&board){
        int dr=row;
        int  dc=col;
        
        while(row>=0 and col>=0)
        {
            if(board[row][col]=='Q')return false;
            row--;
            col--;
        }
        row=dr;
        col=dc;
        while(col>=0)
        {
               if(board[row][col]=='Q')return false;
            col--;
        }
        col=dc;
        while(row<board.size() and col>=0)
        {
               if(board[row][col]=='Q')return false;
            row++;
            col--;
        }
        return true;
    }
    
    
    
    void solve(int col,int n,vector<string> &board)
    {
        if(col==n)
        {
            ans.push_back(board);
            return;
        }
        
        for(int i=0;i<n;i++)
        {
            if(issafe(i,col,board))
            {
                board[i][col]='Q';
                solve(col+1,n,board);
                board[i][col]='.';
            }
        }
        
        
        
    }
    
    
    
    
    vector<vector<string>> solveNQueens(int n) {
        
        vector<string>board(n);
        string s(n,'.');
        for(int i=0;i<n;i++)
        {
            board[i]=s;
            
        }
        
        solve(0,n,board);
        return ans;
            
    }
};