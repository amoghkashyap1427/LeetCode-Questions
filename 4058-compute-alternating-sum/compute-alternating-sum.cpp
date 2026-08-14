class Solution {
public:
    int alternatingSum(vector<int>& nums) {
        int eve=0;
        int odd=0;
        for(int i=0; i<nums.size(); i++){
            if(i%2==0){
                eve+=nums[i];
            } else {
                odd+=nums[i];
            }
        }
        return eve-odd;
    }
};