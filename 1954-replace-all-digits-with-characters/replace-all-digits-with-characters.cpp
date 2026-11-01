class Solution {
public:
    char shift(char ch, char n){
        int num = int(n-'0');
        for(int i=0; i<num; i++){
            ch++;
        }
        return ch;
    }
    string replaceDigits(string s) {
        string ans="";
        for(int i=0; i<s.size(); i++){
            if(isdigit(s[i])){
                ans+=shift(s[i], s[i-1]);
            } else {
                ans+=s[i];
            }
        }
        return ans;
    }
};