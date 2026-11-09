class Solution {
public:
    bool isSort(string s1, string s2, string& order){
        unordered_map<char, int>mp;
        for(int i=0; i<order.size(); i++){
            mp[order[i]]=i;
        }
        int n=s1.size();
        int m=s2.size();
        for(int i=0; i<min(n, m); i++){
            if(mp[s1[i]]<mp[s2[i]]){
                return true;
            }else if (mp[s1[i]] > mp[s2[i]]) {
                return false;
            }
        }
        return n <= m;
    }

    bool isAlienSorted(vector<string>& words, string order) {
        bool ans = true;
        for(int i=0; i<words.size()-1; i++){
            ans &= isSort(words[i], words[i+1], order);
        }
        return ans;
    }
};