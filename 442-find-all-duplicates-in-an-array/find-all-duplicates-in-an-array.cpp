class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        unordered_map<int, int>m;
        vector<int>vec;
        for(int x : nums){
            m[x]++;
        }
        for(auto it : m){
            if(it.second >=2){
                vec.push_back(it.first);
            }
        }
        return vec;
    }
};