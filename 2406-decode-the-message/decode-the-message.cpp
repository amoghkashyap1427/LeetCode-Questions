class Solution {
public:
    string decodeMessage(string key, string message) {
        unordered_map<char, char> mp;
        char al = 'a';

        for(char ch : key) {
            if(ch==' ') continue;
            if(mp.find(ch) == mp.end()) {
                mp[ch] = al++;
            }
        }

        string s = "";

        for(char x : message) {
            if(x == ' ') {
                s += ' ';
            }
            else {
                s += mp[x];
            }
        }

        return s;
    }
};