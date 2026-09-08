class Solution {
public:
    int countCommas(int n) {
        long long ans = 0;

        // 1000 to 999999 -> 1 comma
        if (n >= 1000) {
            ans += min(n, 999999) - 999;
        }

        // 1000000 to 999999999 -> 2 commas
        if (n >= 1000000) {
            ans += 2LL * (min(n, 999999999) - 999999);
        }

        // 1000000000 to n -> 3 commas
        if (n >= 1000000000) {
            ans += 3LL * (n - 999999999);
        }

        return ans;
    }
};