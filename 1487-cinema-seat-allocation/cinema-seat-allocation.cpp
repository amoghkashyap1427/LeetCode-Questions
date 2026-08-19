class Solution {
public:
    int maxNumberOfFamilies(int n, vector<vector<int>>& reservedSeats) {
        
        unordered_map<int, int> rows;

        for (auto &seat : reservedSeats) {
            int row = seat[0];
            int col = seat[1];

            if (col >= 2 && col <= 9) {
                rows[row] |= (1 << col);
            }
        }

        long long ans = 2LL * n;

        for (auto &[row, mask] : rows) {
            
            int families = 0;

            bool left = true;
            for (int seat = 2; seat <= 5; seat++) {
                if (mask & (1 << seat)) {
                    left = false;
                    break;
                }
            }

            bool middle = true;
            for (int seat = 4; seat <= 7; seat++) {
                if (mask & (1 << seat)) {
                    middle = false;
                    break;
                }
            }

            bool right = true;
            for (int seat = 6; seat <= 9; seat++) {
                if (mask & (1 << seat)) {
                    right = false;
                    break;
                }
            }

            if (left && right) {
                families = 2;
            }
            else if (left || middle || right) {
                families = 1;
            }
            else {
                families = 0;
            }

            ans -= 2;
            ans += families;
        }

        return ans;
    }
};