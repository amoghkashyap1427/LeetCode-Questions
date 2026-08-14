class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        vector<double>res;
        res.push_back(celsius+273.15);
        res.push_back(celsius*1.8 + 32.0);

        return res;
    }
};