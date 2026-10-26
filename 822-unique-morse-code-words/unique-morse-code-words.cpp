class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        unordered_map<char, string>mp;
        string arr[26] = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        int i=0;
        for(char ch='a'; ch<='z'; ch++){
            mp[ch]=arr[i++];
        }
        unordered_set<string>s;
        for(auto word : words){
            string st="";
            for(char c : word){
                st+=mp[c];
            }
            s.insert(st);
        }
        return s.size();
    }
};