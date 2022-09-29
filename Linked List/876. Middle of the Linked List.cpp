Question Link- https://leetcode.com/problems/middle-of-the-linked-list/

Time Complexity: O(N) + O(N/2) (N: length of linked list)

Space Complexity: O(1) since two variables are being used

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
    ListNode* middleNode(ListNode* head) {
        int length = 0;
        ListNode* temp = head;
        
        while(temp != NULL){
            length++;
            temp = temp -> next;
        }
        int midPoint = length / 2;
        temp = head;
        
        while(midPoint--){
            temp = temp -> next; 
        }
        return temp;
    }
};


------------------------------------------------------------------------------
Optimised Approach- Slow & Fast Pointer Approach

Time Complexity: O(N)

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
    ListNode* middleNode(ListNode* head) {
       ListNode *slow = head, *fast = head;
        while(fast != NULL && fast -> next != NULL){
            slow = slow -> next;
            fast = fast -> next -> next;
        }
        return slow;
    }
};
