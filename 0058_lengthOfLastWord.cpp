#include <iostream>
using namespace std;
class Solution {
public:
    int lengthOfLastWord(string s) {
        s=s+' ';
        int sz=s.size();
        // cout<<sz<<endl;
        int c=0;
        for(int i=sz-1; i>=0; i--){
            char ch = s[i];
            if(ch!=' '){
                c++;
                if(i-1>=0)
                {if(s[i-1]==' '){
                    break;
                }}
            }
        }
        return c;
    }
};