class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n=nums.size();
        vector<int>c(n+1,0);
        vector<int>ans;

        for(int x:nums){
            c[x]++;
        }

        for(int i=1; i<=n; i++){
            if(c[i]==0){
                ans.push_back(i);
            }
        }

        return ans;
    }
};