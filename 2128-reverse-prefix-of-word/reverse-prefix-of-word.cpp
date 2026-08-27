class Solution {
public:
    string reversePrefix(string word, char ch) {
        if(word.find(ch)==string::npos){
            return word;
        }
        string s="";
        string ans;
        for(int i=0; i<word.size(); i++){
            char c=word[i];
            if(c==ch){
                ans=c+s+word.substr(i+1);
                return ans;
            } else {
                s=c+s;
            }
        }
        return "";
    }
};