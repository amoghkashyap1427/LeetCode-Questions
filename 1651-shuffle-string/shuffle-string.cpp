class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        unordered_map<int, char>m;
        int i=0;
        for(int x : indices){
            m[x]=s[i];
            i++;
        }
        string st="";
        for(int i=0; i<s.size(); i++){
            st+=m[i];
        }
        return st;
    }
};