class Solution {
private:
    int solve(vector<int>& nums, int index, int currentXOR) {
        // Base case: if we have considered all elements, return the current XOR total
        if (index == nums.size()) {
            return currentXOR;
        }
        
        // Choice 1: Include nums[index] in the subset
        int include = solve(nums, index + 1, currentXOR ^ nums[index]);
        
        // Choice 2: Exclude nums[index] from the subset
        int exclude = solve(nums, index + 1, currentXOR);
        
        // Return the sum of XOR totals from both choices
        return include + exclude;
    }

public:
    int subsetXORSum(vector<int>& nums) {
        return solve(nums, 0, 0);
    }
};