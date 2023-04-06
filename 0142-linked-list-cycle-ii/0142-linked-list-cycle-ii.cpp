/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        
        
        if(!head || !head->next)
            return NULL;
        
//         ListNode*fast=head;
//         ListNode* slow=head;
        
//         while(fast!=NULL && fast->next!=NULL)
//         {
//             fast=fast->next->next;
//             slow=slow->next;
            
//             if(fast==slow)
//                 return fast->next;
//         }
//         return NULL;
        
        
        ListNode * node=head;
        
        unordered_map<ListNode*,int>mpp;
        mpp[head]++;
        
        while(mpp[node]<2 && node->next )
        {
            node=node->next;
            mpp[node]++;
        }
        
        if(mpp[node]==2)
        return node;
        else
            return NULL;
        
        
        
        
        
        
        
        
        
        
    }
};