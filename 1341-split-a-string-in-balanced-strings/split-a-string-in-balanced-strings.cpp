class Solution {
public:
    int balancedStringSplit(string s) {
        int r=0, l=0, c=0;
        for(int i=0; i<s.size(); i++){
            char ch=s[i];
            if(ch=='R'){
                r++;
            }
            if(ch=='L'){
                l++;
            }
            if(l==r){
                c++;
            }
        }
        return c;
    }
};