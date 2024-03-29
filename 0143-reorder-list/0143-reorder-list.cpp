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
    // 876. Middle of the Linked List - returns the mid of list using slow-fast pointer approach
    ListNode* middleNode(ListNode* head) {
        auto slow = head, fast = head;
        while(fast && fast -> next)
            slow = slow -> next,
            fast = fast -> next -> next;            // fast moves at 2x speed
        return slow;                                // slow ends up at mid
    }
	// 206. Reverse Linked List - reverses and returns the head of reversed list
    ListNode* reverseList(ListNode* head) {
        ListNode *prev = nullptr;
        while(head) {
            auto nextNode = head -> next;           // store next node before reversing next ptr of cur
            head -> next = prev;                    // reverse the next ptr to previous node
            prev = head;                            // update previous node as cur
            head = nextNode;                        // move to orignal next node
        }
        return prev;                                // returns head of reversed list
    }
    void reorderList(ListNode* head) {
        if(!head || !head -> next) return;
        auto mid = middleNode(head);
        auto R = reverseList(mid), L = head -> next;
        for(int i = 0; L != R; i++, head = head -> next)     // re-order in alternating fashion 
            if(i & 1) {                              
                head -> next = L;
                L = L -> next;
            }
            else {
                head -> next = R;
                R = R -> next;
            }
    }
};
//     void reorderList(ListNode* head) {
//        if ((!head) || (!head->next) || (!head->next->next)) return; // Edge cases
        
//         stack<ListNode*> my_stack;
//         ListNode* ptr = head;
//         int size = 0;
//         while (ptr != NULL) // Put all nodes in stack
//         {
//             my_stack.push(ptr);
//             size++;
//             ptr = ptr->next;
//         }
        
//         ListNode* pptr = head;
//         for (int j=0; j<size/2; j++) // Between every two nodes insert the one in the top of the stack
//         {
//             ListNode *element = my_stack.top();
//             my_stack.pop();
//             element->next = pptr->next;
//             pptr->next = element;
//             pptr = pptr->next->next;
//         }
//         pptr->next = NULL;
//     }
// };