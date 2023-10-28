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
     int getLengthOfLinkedList(ListNode *head)
    {
        ListNode *ptr = head;
        int cnt=0;
        while(ptr)
        {
            cnt++;
            ptr=ptr->next;
        }
        return cnt;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode *cursor=head;
        for(int i=0;i<k;i++)
        {
            if(cursor==NULL)return head;
            cursor=cursor->next;
        }
        
        ListNode* curr=head,*prev=NULL,*nxt=NULL;
        for(int i=0;i<k;i++)
        {
            nxt=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nxt;
        }
        head->next=reverseKGroup(curr,k);
        return prev;
//        if(!head)
//             return NULL;
    
//         int len = getLengthOfLinkedList(head);
//         if(len<k)
//             return head;
        
//         int numberOfGroupsToReverse = len/k;
        
//         ListNode *dummyNode = new ListNode(-1);
//         dummyNode->next = head;
//         ListNode *start = dummyNode;

//         ListNode *pre,*remaining,*nxt;
//         for(int i=0;i<numberOfGroupsToReverse;i++)
//         {
//             pre = NULL;
//             remaining = head;
//             for(int j=0;j<k;j++)
//             {
//                 nxt = head->next;
//                 head->next = pre;
//                 pre=head;
//                 head=nxt;
//             }
//             start->next = pre;
//             remaining->next = head;
//             start = remaining;
//         }
        
//         return dummyNode->next;
    }
};