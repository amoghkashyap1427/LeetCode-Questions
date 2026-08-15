class Solution {
public:
    string reversePrefix(string s, int k) {
        string ans = "";
        for(int i=0; i<k; i++){
            ans=s[i]+ans;
        }
        ans=ans+s.substr(k);
        return ans;
    }
};