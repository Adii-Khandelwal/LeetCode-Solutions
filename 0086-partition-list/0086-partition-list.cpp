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
    ListNode* partition(ListNode* head, int x) {
      //   vector<int> temp;
      //   ListNode*p=head;
      //   while(p)
      //   {
      //       if(p->val<x)
      //           temp.push_back(p->val);
      //       p=p->next;
      //   }
      //   p=head;
      //   while(p)
      //   {
      //       if(p->val>=x)
      //           temp.push_back(p->val);
      //           p=p->next;
      //   }
      //   p=head;
      // int   i=0;
      //   while(p)
      //   {
      //       p->val=temp[i++];
      //       p=p->next;
      //   }
      //   return head;
        
        
      ListNode *left = new ListNode(0);
        ListNode *right = new ListNode(0);
        
        ListNode *leftTail = left;
        ListNode *rightTail = right;
        
        while(head != NULL){
            if(head->val < x){
                leftTail->next = head;
                leftTail = leftTail->next;
            }
            else{
                rightTail->next = head;
                rightTail = rightTail->next;
            }
            head = head->next;
        }
        
        leftTail->next = right->next;
        rightTail->next = NULL;
        
        return left->next;
    }
};