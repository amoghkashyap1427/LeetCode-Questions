class Solution {
public:
    int minOperations(vector<int>& nums) {
        if(nums.size()==1){
            return 0;
        }
        int s=0;
        for(int i=1; i<nums.size(); i++){
            if(nums[i-1]>=nums[i]){
                s+=(nums[i-1]-nums[i]+1);
                nums[i]=nums[i-1]+1;
            }
        }
        return s;
    }
};