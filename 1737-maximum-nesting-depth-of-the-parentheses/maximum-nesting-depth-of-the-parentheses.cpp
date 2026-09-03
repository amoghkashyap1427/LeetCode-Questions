class Solution {
public:
    int maxDepth(string s) {
        int n = s.size();
        int c=0, ans=0;
        for(char ch : s){
            if(ch=='('){
                c++;
                ans=max(ans, c);
            } else if(ch==')'){
                c--;
            }
        }
        return ans;
    }
};