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
    
    
    
    
    
    ListNode* removeNodes(ListNode* head) {
       
        
        //we need to reverse the linked list so that we get the first element removed too . when we reverse the last element becomes the first and then we can just look at the other nodes and first element remains the same . we reverse the list again to return the original modified list.
       
        
       ListNode *p=NULL;
     head=reverseList(head);
        p=head;
 
        
        
        while(p && p->next)
        {
            if(p->val > p->next->val)
            {
                p->next=p->next->next;
            }
            else
                p=p->next;
        }
        
        return reverseList(head);
        
        
        
        
    
    }
};