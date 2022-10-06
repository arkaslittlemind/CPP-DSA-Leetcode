// Naive Approach //

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
    ListNode* reverseList(ListNode* head) {
     vector<int> vec;
        
     for (ListNode *curr = head; curr != NULL; curr = curr -> next)
         vec.push_back(curr -> val);
        
     for (ListNode *curr = head; curr != NULL; curr = curr -> next){
         curr -> val = vec.back();
         vec.pop_back();
     }
        return head;
    }
};

-------------------------------------------------------------------------------------------------------------------------------

Question Link- https://leetcode.com/problems/reverse-linked-list/

// Iterative Approach //

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
    ListNode* reverseList(ListNode* head) {
       if(head == NULL)
           return NULL;
        
        ListNode *prev = NULL, *curr = head, *temp = head -> next;
        
        while(curr != NULL){
            curr -> next = prev;
            prev = curr;
            curr = temp;
            
            if(temp != NULL)
                temp = temp -> next;
        }
        return prev;
    }
};

---------------------------------------------------------------------
  
// Recursive Approach //
  
