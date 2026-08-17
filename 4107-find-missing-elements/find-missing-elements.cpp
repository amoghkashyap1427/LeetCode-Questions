class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int> v;
        vector<int> res;
        int maxNum = *max_element(nums.begin(), nums.end());
        int minNum = *min_element(nums.begin(), nums.end());
        for (int x = minNum; x <= maxNum; x++) {
            v.push_back(x);
        }
        for (int i : v) {
            if (find(nums.begin(), nums.end(), i)== nums.end()) {
                res.push_back(i);
            }
        }
        return res;
    }
};