class Solution {
public:
    int numOfStrings(vector<string>& patterns, string word) {
        int c=0;
        for(auto x : patterns){
            if(word.find(x)!=string::npos){
                c++;
            }
        }
        return c;
    }
};