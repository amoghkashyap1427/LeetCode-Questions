class Solution {
public:
    int scoreOfString(string s) {
        int sum=0;
        int x=int(s[0]);
        for(int i=1; i<s.size(); i++){
            sum+=abs(x-int(s[i]));
            x=int(s[i]);
        }
        return sum;
    }
};