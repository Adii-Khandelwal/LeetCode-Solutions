class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        
        int top=0,down=n-1,left=0,right=n-1;
        
        int dir=0;
        vector<vector<int>> ans(n,vector<int>(n,-1));
        int x=1;
        while(top<=down and left<=right)
        {
            if(dir==0)
            {
                for(int i=left;i<=right;i++)
                {
                    ans[top][i]=x;
                    x++;
                }
                top+=1;
                
            }
            else if(dir==1)
            {
                for(int i=top;i<=down;i++)
                {
                    ans[i][right]=x;
                    x++;
                }
            right-=1;    
            }
            else if(dir==2)
            {
                for(int i=right;i>=left;i--)
                {
                    ans[down][i]=x;
                    x++;
                }
                down-=1;
            }
            else
            {
                for(int i=down;i>=top;i--)
                {
                    ans[i][left]=x;
                    x++;
                }
                left++;
            }
        dir=(dir+1)%4;
        }
        return ans;
        
    }
};