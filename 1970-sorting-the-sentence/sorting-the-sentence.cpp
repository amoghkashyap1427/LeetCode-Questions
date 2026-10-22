class Solution {
public:
    string sortSentence(string s) {
        stringstream ss(s);
        string word;
        map<int, string>mp;
        while(ss>>word){
            mp[int(word[word.size()-1])]=word;
        }
        string wd="";
        for(auto it:mp){
            string ex = it.second;
            ex.pop_back();
            if(wd==""){
                wd +=ex;

            } else {
                wd+=' '+ex;
            }
        }
        return wd;
    }
};