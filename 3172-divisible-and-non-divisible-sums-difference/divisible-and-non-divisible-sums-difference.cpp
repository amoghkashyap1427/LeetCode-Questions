class Solution {
public:
    int differenceOfSums(int n, int m) {
        int sumNum1=0, sumNum2=0;
        for(int i=1; i<=n; i++){
            if(i%m==0){
                sumNum1+=i;
            } else {
                sumNum2+=i;
            }
        }
        return (sumNum2-sumNum1);
    }
};