class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int c=0;
        for(int i=0; i<nums.size(); i++){
            int x = nums[i];
            if(x%3==0){
                continue;
            }
            c++;
        }
        return c;
    }
};