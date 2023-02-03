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
    ListNode* mergeNodes(ListNode* head) {
        head=head->next;
        ListNode *p=head;
        ListNode *q=NULL;
        
        int sum=0;
        while(p)
        {
            q=p;
            sum=0;
            
            while(q->val!=0)
            {
                sum+=q->val;
                q=q->next;
            }
            p->val=sum;
            p->next=q->next;
            p=p->next;
            
        }
        return head;
    }
};