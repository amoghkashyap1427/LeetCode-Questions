class Solution {
public:
    int countPrimes(int n) {
        if (n < 3) return 0;
        vector<bool> p(n, true);
        p[0] = p[1] = false;
        for (long long i = 2; i * i < n; i++)
            if (p[i])
                for (long long j = i * i; j < n; j += i)
                    p[j] = false;
        return count(p.begin(), p.end(), true);
    }
};