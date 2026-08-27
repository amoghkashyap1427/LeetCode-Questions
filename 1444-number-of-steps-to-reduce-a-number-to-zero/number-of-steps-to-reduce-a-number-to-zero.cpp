class Solution {
public:
    int numberOfSteps(int num) {
        int c=1;
        if(num==0) return 0;
        while(num>1){
            if(num%2==0){
                num/=2;
            } else {
                num--;
            }
            c++;
        }
        return c;
    }
};