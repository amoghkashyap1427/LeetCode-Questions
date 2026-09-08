class Solution {
public:
    int countCommas(int n) {
        long long ans = 0;
        long long power = 1000;
        int commas = 1;

        while (power <= n) {
            ans += n - power + 1;

            power *= 1000;
            commas++;
        }

        return ans;
    }
};