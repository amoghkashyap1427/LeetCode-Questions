class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        int i = 1;

        while (true) {
            int n = i * k;

            if (find(nums.begin(), nums.end(), n) == nums.end()) {
                return n;
            }

            i++;
        }
    }
};