class Solution {
public:
    bool isBalanced(string num) {
        int evenSum=0, oddSum=0;
        for(int i=0; i<num.size(); i++){
            int x = int(num[i])-'0';
            if(i%2==0){
                evenSum+=x;
            } else {
                oddSum+=x;
            }
        }
        return evenSum==oddSum;
    }
};