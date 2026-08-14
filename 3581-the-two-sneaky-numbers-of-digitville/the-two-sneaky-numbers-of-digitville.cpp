class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        vector<int>res;
        unordered_map<int, int>mp;
        for(int x : nums){
            if(mp.count(x)){
                res.push_back(x);
            }
            mp[x]++;
        }
        return res;
    }
};