class Solution {
public:
    string solve(int n) {
        if (n == 0)
            return "0";
        string res = "";
        while (n > 0) {
            res = char('0' + n % 2) + res;
            n /= 2;
        }
        return res;
    }

    string convertDateToBinary(string date) {
        int year = stoi(date.substr(0, 4));
        int month = stoi(date.substr(5, 2));
        int day = stoi(date.substr(8, 2));
        string sYear = solve(year);
        string sMonth = solve(month);
        string sDay = solve(day);

        return sYear+"-"+sMonth+"-"+sDay;
    }
};