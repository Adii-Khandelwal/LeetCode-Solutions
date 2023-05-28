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
    ListNode* rotateRight(ListNode* head, int k) {
       
//         if(!head)
//         {
//             return NULL;
//         }
        
//         vector<int> arr;
//         ListNode *p=head;
//         while(p)
//         {
//             arr.push_back(p->val);
//             p=p->next;
//         }
       
//          int n=arr.size();
//         if(k>n)
//         {
//             k=k%n;
//         }
//         p=head;
//         for(int i=0;i<n;i++)
//         {
//             p->val=arr[(n-k+i)%n];
//             p=p->next;
//         }
//         return head;
        
        if(!head)
            return NULL;
        
        ListNode *tail;
        
        int cnt=1;
        tail=head;
        while(tail->next)
        {
            cnt++;
            tail=tail->next;
        }
        tail->next=head;
        
        int hind= cnt-k%cnt;
        
        for(int i=0;i<hind;i++)
        {
            tail=tail->next;
            
        }
        
        head=tail->next;
        tail->next=NULL;
        return head;
        
        
        
        
        
        
        
        
        
        
        
        
        
    }
};