Question Link- https://leetcode.com/problems/delete-node-in-a-linked-list/

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
    void deleteNode(ListNode* node) {
        if(node -> next == NULL)
            delete node;
        
    swap(node -> val , node -> next -> val) ;
    
    ListNode *temp2 = node -> next ;
    node -> next = temp2 -> next ;
    
    delete temp2;
    }
};
