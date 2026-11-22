class Solution {
public:
    bool checkString(string s) {
        int a=-1;
        int b=INT_MAX;
        for(int i=0; i<s.size(); i++){
            if(s[i]=='a'){
                a=i;
            }
        }
        for(int i=0; i<s.size(); i++){
            if(s[i]=='b'){
                b=i;
                break;
            }
        }
        cout<<a<<b<<endl;
        return a<b;
    }
};