class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n = nums.size();
        vector<int> count(n + 1, 0);
        int duplicate = -1, missing = -1;

        // Count frequency of each number
        for(int x : nums) 
            count[x]++;

        // Find duplicate (freq=2) and missing (freq=0)
        for(int i = 1; i <= n; i++) {
            if(count[i] == 2) duplicate = i;
            if(count[i] == 0) missing = i;
        }

        return {duplicate, missing};
    }
};