class Solution {
public:
    string toLowerCase(string s) {
        string st="";
        for(auto x : s){
            st+=tolower(x);
        }
        return st;
    }
};