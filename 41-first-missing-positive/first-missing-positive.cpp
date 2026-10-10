class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        unordered_map<int, int>mp;
        for(int n : nums){
            mp[n]++;
        }
        int i=1;
        while(true){
            if(mp.find(i)==mp.end()){
                break;
            }

            i++;
        }
        return i;
    }
};