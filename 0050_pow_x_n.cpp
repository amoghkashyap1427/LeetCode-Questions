class Solution {
public:
    double myPow(double x, int n) {
        if(x==0) return 0.0;
        if(n==0) return 1.0;
        if(x==1) return 1.0;
        if(x==-1 && n%2 == 0) return 1.0;
        if(x==-1 && n%2 != 0) return -1.0;
        double powAns=1;

        long n1=n;
        if(n<0){
            n1=-n1;
            x=1/x;
        }

        while (n1>0){
            if(n1%2==1){
                powAns*=x;
            }
            x*=x;
            n1/=2;
        }
        return powAns;
    }
};