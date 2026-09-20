class Solution {
public:
    int reverseDegree(string s) {
        unordered_map<char, int>mp;
        char ch='a';
        for(int i=26; i>=1; i--){
            mp[ch++]=i;
        }
        int p=0;
        for(int i=0; i<s.size(); i++){
            p+=((i+1)*mp[s[i]]);
        }
        return p;
    }
};