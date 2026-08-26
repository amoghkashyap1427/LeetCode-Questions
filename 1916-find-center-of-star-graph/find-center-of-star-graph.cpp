class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        unordered_map<int, int>mp;
        for(auto v : edges){
            for(auto x : v){
                mp[x]++;
            }
        }
        int maxFreq = INT_MIN;
        int num;
        for(auto it : mp){
            if(maxFreq<it.second){
                maxFreq=it.second;
                num=it.first;
            }
        }
        return num;
    }
};