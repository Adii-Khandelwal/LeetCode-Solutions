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
    
    ListNode* reverseList(ListNode* head)
    {
        ListNode *p,*q,*r;
        p=head;
        q=NULL;
        r=NULL;
        
        while(p)
        {
            r=q;
            q=p;
            p=p->next;
            q->next=r;
        }
    head=q;
        
        return head;
    }
    
    
    
    
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        
        head=reverseList(head);
        ListNode *p=head;
        ListNode *q=NULL;
        if( n==1)
        {
            if(head->next)
            { head=head->next;
            return reverseList(head);}
            else
            {
                return NULL;
            }
        }
        
       
        
        int cnt=1;
   while(p)
        {
           
            if(cnt<n)
            {
                 q=p;
                p=p->next;
                 cnt++;
               
            }        
            else if(cnt==n)
            {
                q->next=p->next;
                delete(p);
                break;
            }
        
      }
        return reverseList(head);
    }
};