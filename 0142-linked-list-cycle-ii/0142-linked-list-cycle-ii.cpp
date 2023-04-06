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
        
        ListNode*fast=head;
        ListNode* slow=head;
       ListNode* entry=head; 
        while(fast!=NULL && fast->next!=NULL && fast->next->next)
        {
            fast=fast->next->next;
            slow=slow->next;
            
            if(fast==slow)
            {
                while(entry!=slow)
                {
                    slow=slow->next;
                    entry=entry->next;
                
                }
            return entry;   
            }
            
        }
        return NULL;
        
        
        //SPACE :O(N) APPROACH
        
//         ListNode * node=head;
        
//         unordered_map<ListNode*,int>mpp;
//         mpp[head]++;
        
//         while(mpp[node]<2 && node->next )
//         {
//             node=node->next;
//             mpp[node]++;
//         }
        
//         if(mpp[node]==2)
//         return node;
//         else
//             return NULL;
        
        
        
        
        
        
        
        
        
        
        
    }
};