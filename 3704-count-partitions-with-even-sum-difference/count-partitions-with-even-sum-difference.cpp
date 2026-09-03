class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int n = nums.size();
        int c = 0;

        vector<int> prefix(n, 0);
        vector<int> suffix(n + 1, 0);

        for (int i = 1; i < n; i++)
            prefix[i] = prefix[i - 1] + nums[i - 1];

        for (int i = n - 1; i >= 0; i--)
            suffix[i] = suffix[i + 1] + nums[i];

        for (int i = 1; i < n; i++) {
            int x = prefix[i] - suffix[i];

            if (x % 2 == 0)
                c++;
        }

        return c;
    }
};