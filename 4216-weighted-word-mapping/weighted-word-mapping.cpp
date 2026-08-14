class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        string result = "";
        for (auto& s : words) {
            int sum = 0;
            for (char ch : s) {
                sum += weights[ch - 'a'];
            }
            int rem = sum % 26;
            result += ('z' - rem); // reverse mapping: 0->'z', 1->'y', ...
        }
        return result;
    }
};