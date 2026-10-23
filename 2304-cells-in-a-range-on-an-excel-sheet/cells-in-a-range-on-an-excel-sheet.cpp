class Solution {
public:
    vector<string> cellsInRange(string s) {
        char ch1=s[0], ch2=s[3];
        int a1=int(s[1])-48, a2=int(s[4])-48;
        vector<string>v;
        for(char ch=ch1; ch<=ch2; ch++){
            for(int i=a1; i<=a2; i++){
                string st = ch+to_string(i);
                v.push_back(st);
            }
        }
        return v;
    }
};