class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);
        string word;
        string ans="";
        while(ss>>word){
            string st="";
            for(int i=0; i<word.size(); i++){
                st=word[i]+st;
            }
            st+=" ";
            ans+=st;
        }
        ans.pop_back();
        return ans;
    }
};