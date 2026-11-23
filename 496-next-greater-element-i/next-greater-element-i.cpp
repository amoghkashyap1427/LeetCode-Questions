class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n = nums2.size();
        vector<int> ans(nums1.size());
        unordered_map<int, int>mp;
        for(int i : nums2){
            mp[i]=-1;
        }
        stack<int> st;
        for (int i = n - 1; i >= 0; i--) {
            int x = nums2[i];
            while (!st.empty() && st.top() <= x) {
                st.pop();
            }
            if (!st.empty()) {
                mp[x] = st.top();
            }
            st.push(x);
        }
        for(int i=0; i<nums1.size(); i++){
            ans[i]=mp[nums1[i]];
        }
        return ans;
    }
};