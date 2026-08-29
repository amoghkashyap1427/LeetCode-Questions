class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int st=1;
        for(int end=1; end<nums.size(); end++){
            if(nums[end]!=nums[st-1]){
                nums[st]=nums[end];
                st++;
            }
        }
        return st;
    }
};