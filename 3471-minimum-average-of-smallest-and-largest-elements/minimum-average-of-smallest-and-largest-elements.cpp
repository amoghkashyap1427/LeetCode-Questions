class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<double>ans;
        int i=0, j=nums.size()-1;
        while(i<=j){
            double avg = (double)(nums[i]+nums[j]) / 2;
            i++;
            j--;
            ans.push_back(avg);
        }
        return *min_element(ans.begin(), ans.end());
    }
};