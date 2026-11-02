class Solution {
public:
    vector<int> minCosts(vector<int>& cost) {
        vector<int>ans;
        ans.push_back(cost[0]);
        for(int i=1; i<cost.size(); i++){
            ans.push_back(min(ans[i-1], cost[i]));
        }
        return ans;
    }
};