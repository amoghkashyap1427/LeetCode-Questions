class Solution {
public:
    int countAsterisks(string s) {
        stringstream ss(s);
        string word;
        int c=0;
        int aster=0;
        while (getline(ss, word, '|')) {
            c++;
            if(c%2==0) continue;
            aster+=count(word.begin(), word.end(), '*');
        }
        return aster;
    }
};