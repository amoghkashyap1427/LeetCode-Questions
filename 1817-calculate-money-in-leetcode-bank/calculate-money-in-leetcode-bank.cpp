class Solution {
public:
    int totalMoney(int n) {
        int c=2;
        int sum=0;
        int a=1;
        int z=1;
        while(z<=n){
            sum+=a++;
            if(z%7==0){
                a=c++;
            }
            z++;
        }
        return sum;
    }
};