class Solution {
public:
    int totalNumbers(vector<int>& digits) {
        unordered_map<int, int> mp;

        for (int d : digits) {
            mp[d]++;
        }

        int ans = 0;

        for (int i = 100; i <= 999; i += 2) {

            int a = i / 100;
            int b = (i / 10) % 10;
            int c = i % 10;

            if (a == b && b == c) {
                if (mp[a] >= 3)
                    ans++;
            }
            else if (a == b) {
                if (mp[a] >= 2 && mp[c] >= 1)
                    ans++;
            }
            else if (a == c) {
                if (mp[a] >= 2 && mp[b] >= 1)
                    ans++;
            }
            else if (b == c) {
                if (mp[b] >= 2 && mp[a] >= 1)
                    ans++;
            }
            else {
                if (mp[a] >= 1 && mp[b] >= 1 && mp[c] >= 1)
                    ans++;
            }
        }

        return ans;
    }
};