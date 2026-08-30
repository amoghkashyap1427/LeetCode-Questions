class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char>sett;
        int left=0, maxlen=0;
        for(int right=0; right<s.size(); right++){
            while(sett.count(s[right])){
                sett.erase(s[left]);
                left++;
            }
            sett.insert(s[right]);
            maxlen=max(maxlen, right-left+1);
        }
        return maxlen;
    }
};