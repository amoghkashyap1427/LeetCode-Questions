class Solution {
public:
    string removeOccurrences(string s, string part) {
        while(s.find(part)<s.length()){
            int index = s.find(part);
            s=s.erase(index, part.length());
        }
        return s;
    }
};