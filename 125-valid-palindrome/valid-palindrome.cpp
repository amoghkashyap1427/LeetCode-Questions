class Solution {
public:

    bool isAlphaNum(char ch){
        if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z') || (int(ch)>=48 && int(ch)<=57)){
            return true;
        } else {
            return false;
        }
    }

    bool isPalindrome(string s) {
        int st=0, end=s.size();

        while(st<end){
            if(!isAlphaNum(s[st])){
                st++;
                continue;
            }

            if(!isAlphaNum(s[end])){
                end--;
                continue;
            }

            if(tolower(s[st])!=tolower(s[end])){
                return false;
            }
            st++;
            end--;
        }

        return true;
    }
};