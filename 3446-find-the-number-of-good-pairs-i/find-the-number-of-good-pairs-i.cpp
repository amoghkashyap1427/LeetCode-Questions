class Solution {
public:
    int numberOfPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        for(auto &x : nums2){
            x=x*k;
        }
        int c=0;
        for(int i=0; i<nums1.size(); i++){
            for(int j=0; j<nums2.size(); j++){
                if(nums1[i]%nums2[j]==0){
                    c++;
                }
            }
        }
        return c;
    }
};