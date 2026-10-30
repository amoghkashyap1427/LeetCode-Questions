class Solution {
public:
    int gcd(int a, int b){
        while(a>0 && b>0){
            if(a>b){
                a%=b;
            } else {
                b%=a;
            }
        }
        return (a==0)?b:a;
    }
    int findGCD(vector<int>& nums) {
        int mini = *min_element(nums.begin(), nums.end());
        int maxi = *max_element(nums.begin(), nums.end());
        return(gcd(mini, maxi));
    }
};