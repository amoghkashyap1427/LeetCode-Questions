class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int sum=0, allSum=0;
        for(int x : nums){
            sum+=x;
            while(x>0){
                allSum+=(x%10);
                x/=10;
            }
        }
        return abs(allSum-sum);
    }
};