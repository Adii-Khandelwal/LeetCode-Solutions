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
   ListNode* rev(ListNode* head) {
          if(head==NULL)
            return NULL;
    ListNode*curr=head;
    ListNode*prev=NULL;
    ListNode*nex=NULL;
        while(curr!=NULL){
            nex=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nex;
        }
        return prev;
    }
    
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
      ListNode * dummy=new ListNode();
        ListNode *temp=dummy;
        l1=rev(l1);
        l2=rev(l2);
        int carry=0;
        
        while(l1 || l2 || carry)
        {   int sum=0;
            if(l1)
            {
                sum+=l1->val;
                l1=l1->next;
            }
         if(l2)
            {
                sum+=l2->val;
                l2=l2->next;
            }
         
            sum+=carry;
         carry=sum/10;
         ListNode *node = new ListNode(sum%10);
         temp->next=node;
         temp=temp->next;
         
        }
        return rev(dummy->next);
        
    }
};