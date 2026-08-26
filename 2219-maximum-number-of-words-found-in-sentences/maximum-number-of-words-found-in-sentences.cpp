class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int maxWord = INT_MIN;
        for(auto s : sentences){
            int c=0;
            s=s+" ";
            for(char ch : s){
                if(ch==' '){
                    c++;
                }
                maxWord=max(maxWord, c);
            }
        }
        return maxWord;
    }
};