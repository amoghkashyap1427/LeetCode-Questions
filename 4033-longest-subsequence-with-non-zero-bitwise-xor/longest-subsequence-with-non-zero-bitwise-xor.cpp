class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int c=0;
        for(int x : nums){
            if(x==0){
                c++;
            }
        }
        if(c==nums.size()) return 0;
        int totalXOR=0;
        for(int x : nums){
            totalXOR ^=x;
        }

        return (totalXOR==0)?nums.size()-1:nums.size();
    }
};