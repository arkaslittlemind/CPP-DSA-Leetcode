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
    
private:
    
    ListNode *reverseList(ListNode *head)
{
    if(head == NULL)
        return NULL ;

    // We need 3 pointers to Reverse the LinkedList - Previous , Current & Next

    // Initally, Previous points to NULL

    ListNode *p = NULL ;

    // Current points to Head

    ListNode *c = head ;

    // Next point to Head's Next Node

    ListNode *n = head -> next ;

    // We use the same logic to reverse the linked list as we did in lecture 10

    while(c != NULL)
    {
        c -> next = p ;

        p = c ;
        c = n ;

        if(n != NULL)
            n = n -> next ;
    }

    return p ;
}
    
public:
    
    
    bool isPalindrome(ListNode* head) {
        if(head == NULL) return true;
        
        //finding middle
        ListNode *slow = head, *fast = head;
        while(fast -> next != NULL && fast -> next -> next != NULL){
            slow = slow -> next;
            fast = fast -> next -> next;
        }
        
        //reverse the 2nd half of the linked list
        ListNode *rev = reverseList(slow -> next);
        
        ListNode *curr = head;
        while(rev != NULL){
            if(rev -> val != curr -> val)
                return false;
            
            rev = rev -> next;
            curr = curr -> next;
        }
        return true;
    }
};