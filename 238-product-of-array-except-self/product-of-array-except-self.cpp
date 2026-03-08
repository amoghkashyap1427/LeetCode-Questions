class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int>finalVec(n,1);
        vector<int>prefix(n,1);
        vector<int>suffix(n,1);

        // prefix
        for(int i=1; i<n; i++){
            prefix[i] = nums[i-1]*prefix[i-1];
        }

        // suffix
        for(int i=n-2; i>=0; i--){
            suffix[i] = nums[i+1]*suffix[i+1];
        }

        // ans
        for(int i=0; i<n; i++){
            finalVec[i] = suffix[i]*prefix[i];
        }

        return finalVec;
    }
};