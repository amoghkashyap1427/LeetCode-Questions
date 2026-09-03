class Solution {
public:
    vector<int> processQueries(vector<int>& queries, int m) {
        vector<int> v;
        vector<int> nums;

        for(int i = 1; i <= m; i++) {
            nums.push_back(i);
        }

        for(int q : queries) {
            int index = find(nums.begin(), nums.end(), q) - nums.begin();

            v.push_back(index);

            nums.erase(nums.begin() + index);
            nums.insert(nums.begin(), q);
        }

        return v;
    }
};