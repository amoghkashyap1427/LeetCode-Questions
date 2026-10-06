class Solution {
public:
    int minAddToMakeValid(string s) {
        int c=0;
        int minR=0;
        for(char ch : s){
            if(ch=='('){
                c++;
            } else {
                c>0 ? c-- : minR++;
            }
        }
        return minR+c;
    }
};