class Solution {
public:
    bool isPalindrome(string s) {
        string t="";
        for(char ch : s){
            if(isalnum(ch)){
                t+=tolower(ch);
            }
        }
        int st=0, end=t.size()-1;
        while(st<=end){
            if(t[st]!=t[end]){
                return false;
            }
            st++;
            end--;
        }
        return true;
    }
};