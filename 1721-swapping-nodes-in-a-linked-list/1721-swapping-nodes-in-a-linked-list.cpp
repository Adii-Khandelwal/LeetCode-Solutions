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
    ListNode* swapNodes(ListNode* head, int k) {
        
//         ListNode *p=head;
//         int cnt=0;
//         while(p)
//         {
//             cnt++;
//             p=p->next;
//         }
        
//         p=head;
        

        
//         int arr[cnt];
        
//         for(int i=0;i<cnt;i++)
//         {
//             arr[i]=p->val;
//             p=p->next;
//         }
        
//         p=head;
//         swap(arr[k-1],arr[cnt-k]);
        
     
        
//         for(int i=0;i<cnt;i++)
//         {
//             p->val=arr[i];
//             p=p->next;
//         }
        
//       return head;  
      
        
        ListNode *p=head;
        int cnt=0;
        ListNode *n1,*n2=head;
        for(p=head;p!=NULL;p=p->next)
        {
            cnt++;
            if(cnt==k)
            {
                n1=p;
                
            }
            if(cnt>k)
                n2=n2->next;
        }
        swap(n1->val,n2->val);
        
        return head;
        
        }
};