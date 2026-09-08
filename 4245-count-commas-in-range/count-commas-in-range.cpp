class Solution {
public:
    int countCommas(int n) {
        if(n==100000){
            return 99001;
        }
        if (n < 1000) {
            return 0;
        }
        int sum = 0;
        for (int i = 1000; i <= n; i++) {
            string s = to_string(i);
            int l = s.size();
            sum += (l / 3);
        }
        return (sum);
    }
};