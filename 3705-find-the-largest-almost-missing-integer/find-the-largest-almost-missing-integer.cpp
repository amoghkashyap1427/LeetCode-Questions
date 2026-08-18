class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int, int> freq;
        
        for (int s = 0; s <= n - k; s++) {
            unordered_set<int> seen;
            for (int j = s; j < s + k; j++) {
                seen.insert(nums[j]);
            }
            for (int val : seen) {
                freq[val]++;
            }
        }
        
        int ans = -1;
        for (auto& [val, cnt] : freq) {
            if (cnt == 1) {
                ans = max(ans, val);
            }
        }
        
        return ans;
    }
};