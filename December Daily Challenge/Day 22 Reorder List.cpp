Question Link- https://leetcode.com/problems/reorder-list/

// Iterative Approach //

class Solution {
public:
    void reorderList(ListNode* head) {
        // we need to find the penultimate node in order to proceed
        ListNode* penultimate;
        while (head && head->next && head->next->next) {
            penultimate = head;
            while (penultimate->next->next) penultimate = penultimate->next;
            // then we move it in the second spot
            penultimate->next->next = head->next;
            head->next = penultimate->next;
            // and set penultimate to be the last
            penultimate->next = NULL;
            head = head->next->next;
        }
    }
};
