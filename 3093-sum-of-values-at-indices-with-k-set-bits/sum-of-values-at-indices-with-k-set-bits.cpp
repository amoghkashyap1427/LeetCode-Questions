class Solution {
public:
    int sumIndicesWithKSetBits(vector<int>& nums, int k) {
        int n= nums.size();
        int sum=0;
        for(int i=0; i<n; i++){
            int number = i;
            int c=0;
            while(number>0){
                int rem = number%2;
                if(rem==1){
                    c++;
                }
                number/=2;
            }
            if(c==k){
                sum+=nums[i];
            }
        }
        return sum;
    }
};