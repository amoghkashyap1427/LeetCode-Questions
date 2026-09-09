class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxEl = *max_element(nums.begin(), nums.end());
        int indexOfMax = max_element(nums.begin(), nums.end())-nums.begin();
        nums.erase(nums.begin()+indexOfMax);
        int secMaxEl = *max_element(nums.begin(), nums.end());
        return (maxEl-1)*(secMaxEl-1);
    }
};