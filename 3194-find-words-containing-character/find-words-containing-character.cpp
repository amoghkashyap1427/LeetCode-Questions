class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int>res;
        int c=0;
        for(auto& s : words){
            if(s.find(x) != string::npos){
                res.push_back(c);
            }
            c++;
        }
        return res;
    }
};