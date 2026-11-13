class Solution {
public:
    int countBits(int n){
        int c=0;
        while(n>0){
            n &= (n - 1);
            c++;
        }
        return c;
    }
    vector<int> sortByBits(vector<int>& arr) {
        auto comp = [&](int a, int b) {
            int cnt1 = countBits(a);
            int cnt2 = countBits(b);
            if(cnt1==cnt2){
                return a<b;
            }
            return cnt1 < cnt2;
        };
        stable_sort(arr.begin(), arr.end(), comp);
        return arr;
    }
};