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
    ListNode* reverseKGroup(ListNode* head, int k) {
        
        if(!head)
            return NULL;
        ListNode *KSizeChecker = head;
        for(int i=0;i<k;i++)
        {
            if(KSizeChecker==NULL)
                return head;
            KSizeChecker = KSizeChecker->next;
        }
        
        
        
        ListNode *curr = head, *next = NULL, *prev = NULL;
        int count = 0;
        while(curr != NULL && count < k){
            next = curr -> next;
            curr -> next = prev;
            prev = curr;
            curr = next;
            count++;
        }
        if(next != NULL){
            ListNode *rest_head = reverseKGroup(next, k);
            head -> next = rest_head;
        }
            return prev;
    }
};