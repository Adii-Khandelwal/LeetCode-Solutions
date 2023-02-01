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
    int getDecimalValue(ListNode* head) {
        
        int cnt=0;
    
        ListNode *p=head;
       while(head)
       {
           
          
               cnt++;
           head=head->next;
       }
       
        // cout << cnt;
   
        int k=0;
        int ans=0;
        if(cnt==1)
        {
            if(p->val==1)
                return 1;
                else return 0;
        }
        
        while(cnt)
        {
             --cnt;
            if(cnt==0)
            {
                if(p->val==0)
                { ans+=0; 
                break;}
            }
        ans+=pow(2*(p->val),cnt);
        p=p->next;
            
        }
        return ans;
    }
};