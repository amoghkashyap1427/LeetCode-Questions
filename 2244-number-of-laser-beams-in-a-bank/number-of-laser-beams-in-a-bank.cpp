class Solution {
public:
    int numberOfBeams(vector<string>& bank) {

        int firstNumberLaser = 0;
        int sum = 0;

        for (auto& x : bank) {
            int count = 0;
            for (auto ch : x) {
                if (ch == '1') {
                    count++;
                }
            }
            if (count == 0)
                continue;
            if (firstNumberLaser == 0) {
                firstNumberLaser = count;
            } else {
                sum += firstNumberLaser * count;
                firstNumberLaser = count;
            }
        }

        return sum;
    }
};