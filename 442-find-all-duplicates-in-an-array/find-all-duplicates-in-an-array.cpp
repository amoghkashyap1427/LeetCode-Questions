class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        unordered_map<int, int>mp;
        vector<int>vec;
        for(int x : nums){
            mp[x]++;
        }
        for(auto it:mp){
            if(it.second==2){
                vec.push_back(it.first);
            }
        }
        return vec;
    }
};