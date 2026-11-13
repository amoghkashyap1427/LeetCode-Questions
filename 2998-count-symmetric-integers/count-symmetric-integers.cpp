class Solution {
public:
    bool symOrNot(int n){
        string s = to_string(n);
        int len = s.size();
        if(len%2==0){
            string s1 = s.substr(0, len/2);
            string s2 = s.substr(len/2);
            int n1 = stoi(s1);
            int n2 = stoi(s2);
            int sum1=0;
            int sum2=0;
            while(n1>0){
                sum1+=(n1%10);
                n1/=10;
            }
            while(n2>0){
                sum2+=(n2%10);
                n2/=10;
            }
            return (sum1==sum2);

        } else {
            return false;
        }
    }
    int countSymmetricIntegers(int low, int high) {
        int c=0;
        for(int i=low; i<=high; i++){
            if(symOrNot(i)){
                c++;
            }
        }
        return c;
    }
};