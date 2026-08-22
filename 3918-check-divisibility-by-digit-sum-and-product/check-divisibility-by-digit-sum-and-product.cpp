class Solution {
public:
    bool checkDivisibility(int n) {
        int sum=0, p=1;
        int num=n;
        while(num>0){
            int d = num%10;
            sum+=d;
            p*=d;
            num/=10;
        }
        return (n%(sum+p)==0)?true:false;
    }
};