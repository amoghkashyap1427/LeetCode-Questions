class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int length=strs[0].size();
        string result="";
        for(int right=0;right<length;right++){
            char letter=strs[0][right];
            for(auto& word:strs){
                if(word[right]!=letter){
                    return result;
                }
            }
            result+=strs[0][right];
        }
        return result;
    }
};