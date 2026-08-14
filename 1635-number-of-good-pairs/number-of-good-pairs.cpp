class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int, int>mp;
        int pairs=0;
        for(int x : nums){
            pairs+=mp[x];
            mp[x]++;
        }
        return pairs;
    }
};