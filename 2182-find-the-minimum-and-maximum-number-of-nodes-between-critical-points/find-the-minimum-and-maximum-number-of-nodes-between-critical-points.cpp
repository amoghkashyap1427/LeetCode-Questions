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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        vector<int> ans = {-1, -1};

        if (head == nullptr || head->next == nullptr || head->next->next == nullptr)
            return ans;

        ListNode* prevNode = head;
        ListNode* curr = head->next;

        int pos = 1;
        int first = -1;
        int prevCritical = -1;
        int minDist = INT_MAX;

        while (curr->next != nullptr) {
            ListNode* nextNode = curr->next;

            if ((curr->val > prevNode->val && curr->val > nextNode->val) ||
                (curr->val < prevNode->val && curr->val < nextNode->val)) {

                if (first == -1) {
                    first = pos;
                } else {
                    minDist = min(minDist, pos - prevCritical);
                }

                prevCritical = pos;
            }

            prevNode = curr;
            curr = nextNode;
            pos++;
        }

        if (first == -1 || first == prevCritical)
            return ans;

        int maxDist = prevCritical - first;

        ans[0] = minDist;
        ans[1] = maxDist;

        return ans;
    }
};