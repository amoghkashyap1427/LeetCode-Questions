class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minEl=prices[0];
        int maxProfit=0;

        for(int i=1; i<prices.size(); i++){
            minEl=min(minEl, prices[i]);

            maxProfit = max(maxProfit, (prices[i]-minEl));
        }
        return maxProfit;
    }
};