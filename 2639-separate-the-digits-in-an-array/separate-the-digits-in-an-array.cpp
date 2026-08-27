class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int> vec;

        for (int x : nums) {
            vector<int> temp;

            while (x > 0) {
                int digit = x % 10;
                temp.push_back(digit);
                x /= 10;
            }

            reverse(temp.begin(), temp.end());

            for (int digit : temp) {
                vec.push_back(digit);
            }
        }

        return vec;
    }
};