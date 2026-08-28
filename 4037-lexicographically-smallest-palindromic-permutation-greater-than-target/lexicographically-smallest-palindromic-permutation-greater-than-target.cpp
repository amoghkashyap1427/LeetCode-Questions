class Solution {
public:
    string lexPalindromicPermutation(string s, string target) {
        int n = s.size();

        vector<int> cnt(26, 0);

        // Count characters
        for (char ch : s) {
            cnt[ch - 'a']++;
        }

        // Check whether palindrome is possible
        int odd = 0;
        char mid = 0;

        for (int i = 0; i < 26; i++) {
            if (cnt[i] % 2) {
                odd++;
                mid = 'a' + i;
            }
        }

        if (odd > 1)
            return "";

        // Characters available for LEFT HALF
        vector<int> half(26);

        for (int i = 0; i < 26; i++) {
            half[i] = cnt[i] / 2;
        }

        int halfLen = n / 2;
        string left = "";

        // Check whether current prefix can be completed
        // into a palindrome greater than target.
        auto possible = [&]() -> bool {

            string temp = left;

            // Make the largest possible remaining left half
            for (int c = 25; c >= 0; c--) {
                temp += string(half[c], 'a' + c);
            }

            // Construct palindrome
            string pal = temp;

            if (n % 2)
                pal += mid;

            reverse(temp.begin(), temp.end());
            pal += temp;

            return pal > target;
        };

        // Build the left half greedily
        for (int pos = 0; pos < halfLen; pos++) {

            bool found = false;

            // Try smallest character first
            for (int c = 0; c < 26; c++) {

                if (half[c] == 0)
                    continue;

                // Choose c
                half[c]--;
                left += char('a' + c);

                // Can this choice lead to an answer?
                if (possible()) {
                    found = true;
                    break;
                }

                // Undo
                left.pop_back();
                half[c]++;
            }

            if (!found)
                return "";
        }

        // Construct final palindrome
        string ans = left;

        if (n % 2)
            ans += mid;

        string rev = left;
        reverse(rev.begin(), rev.end());

        ans += rev;

        return ans > target ? ans : "";
    }
};