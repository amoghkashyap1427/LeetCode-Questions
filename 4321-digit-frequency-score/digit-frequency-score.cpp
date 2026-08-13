class Solution {
public:
    int digitFrequencyScore(int n) {
        map<int, int>m;
        while(n>0){
            int digit = n%10;
            m[digit]++;
            n/=10;
        }
        int sum=0;
        for(auto it : m){
            sum+=it.first * it.second;
        }

        return sum;
    }
};