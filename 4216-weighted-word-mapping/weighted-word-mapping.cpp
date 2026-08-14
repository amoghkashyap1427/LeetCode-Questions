class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        unordered_map<int, char>mapOfReverse;
        unordered_map<int, char>mapOfAlpha;
        int c=0;
        string st="";
        for(char ch='z'; ch>='a'; ch--){
            mapOfReverse[c++]=ch;
        }
        c=0;
        for(char ch='a'; ch<='z'; ch++){
            mapOfAlpha[ch]=c;
            c++;
        }

        for(auto& s : words){
            int sum=0;
            for(auto& chara : s){
                sum+=weights[mapOfAlpha[chara]];
            }

            int rem = sum%26;
            st+=mapOfReverse[rem];
        }

        return st;
    }
};