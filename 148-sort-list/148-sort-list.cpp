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
    ListNode* sortList(ListNode* head) {
        ListNode *temp = head;
        vector<int> vec;
        
        while(temp){
            vec.emplace_back(temp -> val);
            temp = temp -> next;
        }
        sort(vec.begin(), vec.end());
        ListNode *n = head;
        
        for(int i = 0; i < vec.size(); i++){
            n -> val = vec[i];
            n = n -> next;
        }
        return head;
    }
};