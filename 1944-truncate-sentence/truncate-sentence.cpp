class Solution {
public:
    string truncateSentence(string s, int k) {
        stringstream ss(s);

        string words;
        string res="";

        while(ss>>words){
            if(k==1) res+=words;
            else res+=words+" ";

            k--;
            if(!k) break;
        }
        return res;
    }
};