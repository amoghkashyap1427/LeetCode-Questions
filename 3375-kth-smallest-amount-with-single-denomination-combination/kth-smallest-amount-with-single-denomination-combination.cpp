class Solution {
public:
    long long findKthSmallest(vector<int>& coins, int k) {
        int n = coins.size();

        auto gcd = [](long long a, long long b) {
            while (b) {
                long long t = a % b;
                a = b;
                b = t;
            }
            return a;
        };

        auto count = [&](long long x) {
            long long ans = 0;

            for (int mask = 1; mask < (1 << n); mask++) {
                long long lcm = 1;
                int bits = 0;
                bool ok = true;

                for (int i = 0; i < n; i++) {
                    if (mask & (1 << i)) {
                        bits++;

                        long long g = gcd(lcm, (long long)coins[i]);

                        // Avoid overflow
                        if (lcm > x / (coins[i] / g)) {
                            ok = false;
                            break;
                        }

                        lcm = lcm / g * coins[i];

                        if (lcm > x) {
                            ok = false;
                            break;
                        }
                    }
                }

                if (!ok) continue;

                if (bits % 2)
                    ans += x / lcm;
                else
                    ans -= x / lcm;
            }

            return ans;
        };

        long long low = 1;
        long long high = 1LL * (*min_element(coins.begin(), coins.end())) * k;

        while (low < high) {
            long long mid = low + (high - low) / 2;

            if (count(mid) >= k)
                high = mid;
            else
                low = mid + 1;
        }

        return low;
    }
};