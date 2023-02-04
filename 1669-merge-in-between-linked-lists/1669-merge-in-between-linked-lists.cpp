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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        
        ListNode *s=list1;
        ListNode *t=list1;
        
        
        for(int i=0;i<b;i++)
        {
            if(i<a-1)
                s=s->next;
            
            t=t->next;
        }
        
        s->next=list2;
        
        while(list2->next)
        {
            list2=list2->next;
        }
        list2->next=t->next;
        
        return list1;
        
    }
};