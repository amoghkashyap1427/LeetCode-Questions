class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int c=0;
        int maxi = 0;
        for(int i=0; i<gain.size(); i++){
            c+=gain[i];
            maxi=max(maxi, c);
        }        
        return maxi;
    }
};