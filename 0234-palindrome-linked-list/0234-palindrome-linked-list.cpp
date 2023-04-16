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
    bool isPalindrome(ListNode* head) {
        
        ListNode *temp=head;
        ListNode *temp2=temp;
        
        stack<int> st;
            while(temp)
            {
                st.push(temp->val);
                    temp=temp->next;
            }
        
        while(temp2)
        {
            if(temp2->val == st.top())
            {
                temp2=temp2->next;
                st.pop();
            }
            else return false;
            
        }
        return true;
        
        
    }
};