class Solution {
public:
    bool isPalindrome(string s) {
        string st;
        for(char ch:s){
            char x= ch;
            if((x>='a' && x<='z') || (x>='A' && x<='Z') || (int(x)>=48 && int(x)<=57)){
                x=tolower(x);
                st+=x;
            }
        }

        string rev=st;
        
        int start=0, end=st.size()-1;
        while(start<=end){
            swap(st[start++], st[end--]);
        }

        cout<<rev<<" "<<st<<endl;

        return st==rev;


        return false;
    }
};