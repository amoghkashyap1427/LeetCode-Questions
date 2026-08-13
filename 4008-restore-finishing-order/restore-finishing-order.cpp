class Solution {
public:
    vector<int> recoverOrder(vector<int>& order, vector<int>& friends) {
        vector<int>r;
        unordered_set<int> friendSet(friends.begin(), friends.end());
        for (int i = 0; i < order.size(); i++) {
            if (friendSet.count(order[i])) {
                r.push_back(order[i]);
            }
        }
        return r;
    }
};