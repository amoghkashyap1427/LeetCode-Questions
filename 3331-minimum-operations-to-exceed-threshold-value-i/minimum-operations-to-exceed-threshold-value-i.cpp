class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int c=0;
        while(true){
            int minEl = *min_element(nums.begin(), nums.end());
            if(minEl>=k){
                return c;
            }
            int index1 = min_element(nums.begin(), nums.end()) - nums.begin();
            nums.erase(nums.begin() + index1);
            c++;
        }
        return 0;
    }
};