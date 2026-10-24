class Solution {
private:
    const vector<int> daysInMonth = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    // Converts "MM-DD" string to day of the year (1-indexed)
    int dateToDayOfYear(const string& date) {
        int month = stoi(date.substr(0, 2));
        int day = stoi(date.substr(3, 2));
        
        int dayOfYear = day;
        for (int i = 0; i < month - 1; ++i) {
            dayOfYear += daysInMonth[i];
        }
        return dayOfYear;
    }

public:
    int countDaysTogether(string arriveAlice, string leaveAlice, string arriveBob, string leaveBob) {
        // Find the latest arrival day and earliest departure day
        int latestArrive = max(dateToDayOfYear(arriveAlice), dateToDayOfYear(arriveBob));
        int earliestLeave = min(dateToDayOfYear(leaveAlice), dateToDayOfYear(leaveBob));

        // Overlap exists if latest arrival <= earliest departure
        return max(0, earliestLeave - latestArrive + 1);
    }
};