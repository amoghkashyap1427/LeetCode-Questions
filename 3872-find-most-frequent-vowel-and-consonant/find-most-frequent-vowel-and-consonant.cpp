class Solution {
public:
    int maxFreqSum(string s) {
        unordered_map<char, int>mp;
        for(char ch : s){
            mp[ch]++;
        }

        int maxVowel=0, maxConsonant=0;
        for(auto it : mp){
            int x = it.first;
            if(x=='a' || x=='e' || x=='o' || x=='u' || x=='i'){
                maxVowel = max(maxVowel, it.second);
            } else {
                maxConsonant = max(maxConsonant, it.second);
            }
        }
        return maxVowel+maxConsonant;
    }
};