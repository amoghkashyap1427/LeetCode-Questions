class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        for(auto wd : words){
            string word = wd;
            reverse(wd.begin(), wd.end());
            if(word==wd){
                return word;
            }
        }
        return "";
    }
};