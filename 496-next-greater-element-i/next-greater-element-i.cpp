
class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        unordered_map<int, int> mp;

        for (int i = 0; i < nums2.size(); i++) {
            int c = 0;

            for (int j = i + 1; j < nums2.size(); j++) {
                if (nums2[i] < nums2[j]) {
                    c = 1;
                    mp[nums2[i]] = nums2[j];
                    break;
                }
            }

            if (c == 0) {
                mp[nums2[i]] = -1;
            }
        }

        for (int i = 0; i < nums1.size(); i++) {
            ans.push_back(mp[nums1[i]]);
        }

        return ans;
    }
};
