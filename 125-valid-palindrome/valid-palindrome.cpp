class Solution {
public:
    bool isPalindrome(string s) {
        string st="";
        for(char ch : s){
            if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z') || (ch>='0' && ch<='9')){
                ch=tolower(ch);
                st+=ch;
            }
        }
        string p =st;
        int start=0, end=st.size()-1;
        while(start<=end){
            swap(st[start], st[end]);
            start++; end--;
        }
        return (p==st);
    }
};