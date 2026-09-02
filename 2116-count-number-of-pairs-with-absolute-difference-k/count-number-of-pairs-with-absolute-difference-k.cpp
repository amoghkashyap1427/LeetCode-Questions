class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        unordered_map<int, int>mp;
        int c=0;
        for(int x : nums){
            c+=mp[x-k];
            c+=mp[x+k];
            
            mp[x]++;
        }

        return c;
    }
};