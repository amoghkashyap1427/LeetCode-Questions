class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        int n = nums.size();
        int mini=INT_MAX;
        for(int i=l; i<=r; i++){
            int window_sum = 0;
            for (int k = 0; k < i; k++) {
                window_sum += nums[k];
            }
            int min_sum = INT_MAX;
            if (window_sum > 0) {
                min_sum = window_sum;
            }
            for(int j=i; j<n; j++){
                window_sum += nums[j] - nums[j - i];
                if(window_sum>0){
                    min_sum = min(min_sum, window_sum);
                }
            }
            mini=min(min_sum, mini);
        }
        return (mini == INT_MAX || mini <= 0) ? -1 : mini;
    }
};