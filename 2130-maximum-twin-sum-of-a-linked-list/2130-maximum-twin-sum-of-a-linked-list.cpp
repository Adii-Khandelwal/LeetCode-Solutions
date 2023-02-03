/**
 *Definition for singly-linked list.
 *struct ListNode {
 *    int val;
 *    ListNode * next;
 *    ListNode() : val(0), next(nullptr) {}
 *    ListNode(int x) : val(x), next(nullptr) {}
 *    ListNode(int x, ListNode *next) : val(x), next(next) {}
 *};
 */
class Solution
{
    public:
        int pairSum(ListNode *head)
        {

            ListNode *p = head;
            int major = INT_MIN;
            int maxi = INT_MIN;
           	//         while(p)
           	//         {

           	//         ListNode *q =p;

           	//         while(q->next)
           	//         {
           	//             q=q->next;
           	//         }

           	//         major=p->val+q->val;
           	//              maxi=max(maxi,major);   
           	//             delete(q);
           	//     p=p->next;  
           	//     }

            stack<int> st;

            while (p)
            {
                st.push(p->val);
                p = p->next;
            }
            p = head;
            int n = st.size();
            int i;
            for (i = 0; i < n / 2; i++)
            {
                major = st.top() + p->val;
                maxi = max(maxi, major);
                st.pop();
                p = p->next;
            }

            return maxi;
        }
};