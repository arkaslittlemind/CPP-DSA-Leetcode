Question Link- https://leetcode.com/problems/convert-binary-number-in-a-linked-list-to-integer/

//Iterative Approach//

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
    int getDecimalValue(ListNode* head) {
        int s = 0;
        while(head != NULL){
            s = s* 2+ head -> val;
            head = head -> next;
        }
        return s;
    }
};
