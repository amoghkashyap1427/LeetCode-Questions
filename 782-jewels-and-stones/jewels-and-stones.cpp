class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int c=0;
        for(auto s : stones){
            if(jewels.find(s)!=string::npos){
                c++;
            }
        }
        return c;
    }
};