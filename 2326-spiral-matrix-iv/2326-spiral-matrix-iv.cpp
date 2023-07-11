/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> spiralMatrix(int m, int n, ListNode* head) {
        vector<vector<int>> ans(m,vector<int>(n,-1));
        
        int top=0,down=m-1,left=0,right=n-1;
        int dir=0;
        while(head)
        { 
            if(dir==0)
        {
            for(int i=left;i<=right;i++)
            {
                if(head)
                {ans[top][i]=head->val;
                head=head->next;}
                
            }
            top+=1;
        }
        else if(dir==1)
        {
            for(int i=top;i<=down;i++)
            {
                if(head)
                {ans[i][right]=head->val;
                head=head->next;}
            }
            right-=1;
        }
        else if(dir==2)
        {
            for(int i =right;i>=left;i--)
            {
                if(head)
                {ans[down][i]=head->val;
                head=head->next;}
            }
            down-=1;
        }
        else
        {
            for(int i=down;i>=top;i--)
            {
                if(head)
                {ans[i][left]=head->val;
                head=head->next;
                }          }
            left+=1;
        }
        
         dir=(dir+1)%4;
        } 
        
        return ans;
    }
};