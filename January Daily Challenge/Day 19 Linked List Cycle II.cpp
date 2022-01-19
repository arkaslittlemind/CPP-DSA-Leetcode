Question Link- https://leetcode.com/problems/linked-list-cycle-ii/
  
  class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        unordered_set<ListNode*> seen;
        while (head) {
            if (seen.find(head) != end(seen)) return head;
            seen.insert(head);
            head = head->next;
        }
        return NULL;
    }
};
