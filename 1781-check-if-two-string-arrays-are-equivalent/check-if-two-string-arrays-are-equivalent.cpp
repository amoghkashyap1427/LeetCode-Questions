class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string s1="", s2="";
        for(auto x1 : word1){
            s1+=x1;
        }
        for(auto x2 : word2){
            s2+=x2;
        }
        return s1==s2;
    }
};