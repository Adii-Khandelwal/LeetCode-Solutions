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
    ListNode* middleNode(ListNode* head) {
        
        int count=0;
        ListNode *p=head;
        
        while(p)
        {
            count++;
            p=p->next;
        }
        int n=0;
        while(n!=count/2)
        {
            n++;
            head=head->next;
            
        }
        return head;
        
    }
};