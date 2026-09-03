class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        int pickingTime=0;
        int lastM=-1;
        int lastP=-1;
        int lastG=-1;

        for(int i=0; i<garbage.size(); i++){
            pickingTime+=garbage[i].size();
            for(auto ch : garbage[i]){
                if(ch=='M'){
                    lastM=i;
                }
                if(ch=='P'){
                    lastP=i;
                }
                if(ch=='G'){
                    lastG=i;
                }
            }
        }
        int ans=pickingTime;
        if(lastM != -1) {
            for(int i = 0; i < lastM; i++) {
                ans += travel[i];
            }
        }

        if(lastP != -1) {
            for(int i = 0; i < lastP; i++) {
                ans += travel[i];
            }
        }

        if(lastG != -1) {
            for(int i = 0; i < lastG; i++) {
                ans += travel[i];
            }
        }

        return ans;


    }
};