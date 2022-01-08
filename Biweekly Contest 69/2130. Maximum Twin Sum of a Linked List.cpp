Question Link- https://leetcode.com/contest/biweekly-contest-69/problems/maximum-twin-sum-of-a-linked-list/

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
    int pairSum(ListNode* head) {
        vector<int> vec;
        while(head != nullptr){
            vec.push_back(head -> val);
            head = head -> next;
        }
        int ans = INT_MIN;
        int i = 0;
        int j = vec.size() - 1;
        while(i < j){
            ans = max(ans, vec[i] + vec[j]);
            i++;
            j--;
        }
        return ans;
    }
};
