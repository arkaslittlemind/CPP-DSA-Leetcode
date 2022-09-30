Question Link- https://leetcode.com/problems/convert-binary-number-in-a-linked-list-to-integer/

Time Complexity:  O(N)
Space Complexity: O(1)
  
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
        int answer = 0;
        ListNode *temp = head;
        
        while(temp != NULL){
            answer = answer * 2;
            answer = answer + (temp -> val);
            temp = temp -> next;
        }
        return answer;
    }
};
