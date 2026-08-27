class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int>vec;
        for(int x : nums){
            if(x!=0){
                vec.push_back(x);
            }
        }
        int n = vec.size();
        for(int i=0; i<vec.size(); i++){
            nums[i]=vec[i];
        }
        for(int i = vec.size(); i < nums.size(); i++) {
            nums[i] = 0;
        }
    }
};