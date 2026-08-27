class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        vector<int> vec;

        for(int i = 0; i < nums.size(); i += 2) {
            int frq = nums[i];
            int number = nums[i + 1];

            while(frq--) {
                vec.push_back(number);
            }
        }

        return vec;
    }
};