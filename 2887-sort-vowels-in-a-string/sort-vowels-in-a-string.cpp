class Solution {
public:
    string sortVowels(string s) {
        vector<char>v;
        for(char ch : s){
            if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U'){
                v.push_back(ch);
            }
        }
        sort(v.begin(), v.end());
        for(char ch : v){
            cout<<ch<<" ";
        }
        int j=0;
        for(int i=0; i<s.size(); i++){
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U'){
                s[i]=v[j++];
            }
        }
        return s;
    }
};