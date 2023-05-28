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
    ListNode* deleteDuplicates(ListNode* head) {
        
        if(!head)
            return NULL;
         ListNode* fake = new ListNode(0);
        
        fake->next = head;
        ListNode* pre = fake;     
        ListNode* curr = head;    
        
        while(curr)
        {
            while(curr->next and pre->next->val==curr->next->val)
            {
                curr=curr->next;
            }
              if (pre->next == curr)
                pre = pre->next;
            // If curr is updated to the last duplicate value, discard it & connect pre and curr->next...
            else
                pre->next = curr->next;
                // Move curr forward...
                // In next iteration, we still need to check whether curr points to duplicate value...
                curr = curr->next;
        }
        
        return fake->next;
    }
};