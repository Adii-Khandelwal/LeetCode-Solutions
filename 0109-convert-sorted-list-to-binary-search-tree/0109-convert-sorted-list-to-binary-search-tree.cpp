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
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* sortedListToBST(ListNode* head) {
    if (!head) return nullptr;
    if (!head->next) return new TreeNode(head->val);
    auto fast = head->next, slow = head;
    while (fast->next && fast->next->next) {
        fast = fast->next->next;
        slow = slow->next;
    }
    
    auto mid = slow->next;
    slow->next = nullptr;
    auto root = new TreeNode(mid->val);
    root->left = sortedListToBST(head);
    root->right = sortedListToBST(mid->next);
    return root;
        /*
        Let's think how can we approach this problem. One thing we can make sure of that our middle element of the sorted list will be our root. Now you will ask why? We will do this way because in the question it has stated that the bst that we will form from the list should be a height balanced bst. Now what is height balanced bst?? Height balanced bst means the difference between the heights of the left and the right subtree for any node is not more than one. So due to this condition our intuitive mind will always take the mid element of the list as the root of the bst. So to get the middle of the list I used tortoise-hare method or floyd cycle method. Here the slow starts from head and fast from head.next.next so that our slow pointer will stop at previous element of mid element of list. This will ensure that the slow's next is the root and the slow itself is the part of left subtree. Doing this will help to detach the left part from remaining part of list by making the next of slow to null. We create a node of tree and assign slow's next node's value to it and ensured that it is the root of the tree. We then store the pointer of right subtree (here it's righthalf node) by moving two step ahead because we know our right subtree will start after the root or you can say mid element of the list. After storing we make slow's next to null so there will be no link with further elements of list. Now, we will start making the tree from left and right by assigning the root's left as the head and root's right as righthalf node. Then this process goes on recursively again and again until we reach the base condition.
        */
        
    }
};