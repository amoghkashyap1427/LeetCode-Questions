class Solution {
public:
    int countDigitOccurrences(vector<int>& nums, int digit) {
        int c=0;
        for(int x : nums){
            while(x>0){
                int digi = x%10;
                if(digi==digit){
                    c++;
                }
                x/=10;
            }
        }
        return c;
    }
};