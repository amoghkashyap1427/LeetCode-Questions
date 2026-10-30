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
        vector<int>v;
        ListNode* curr = head;
        while(curr!=nullptr){
            v.push_back(curr->val);
            curr=curr->next;
        }
        int maxTwinSum = 0;
        int n = v.size();
        for (int i = 0; i < n / 2; i++) {
            maxTwinSum = max(maxTwinSum, v[i] + v[n - 1 - i]);
        }
        return maxTwinSum;
    }
};