class Solution {
public:
    int countDaysTogether(string arriveAlice, string leaveAlice, string arriveBob, string leaveBob) {
        unordered_map<int, int>mp;
        mp[1]=31;
        mp[2]=28;
        mp[3]=31;
        mp[4]=30;
        mp[5]=31;
        mp[6]=30;
        mp[7]=31;
        mp[8]=31;
        mp[9]=30;
        mp[10]=31;
        mp[11]=30;
        mp[12]=31;
        // alice Arrive Month and Date
        int aliceMonthD1 = (arriveAlice[0])-48; 
        int aliceMonthD2 = (arriveAlice[1])-48;
        int aliceMonth = (aliceMonthD1==0)?aliceMonthD2 : aliceMonthD1*10+aliceMonthD2;
        int aliceADay = ((arriveAlice[3])-48)*10+(arriveAlice[4])-48;

        // alive leave Month and Date
        int aliceLMonthD1 = (leaveAlice[0])-48; 
        int aliceLMonthD2 = (leaveAlice[1])-48;
        int aliceLMonth = (aliceLMonthD1==0)?aliceLMonthD2 : aliceLMonthD1*10+aliceLMonthD2;
        int aliceLDay = ((leaveAlice[3])-48)*10+(leaveAlice[4])-48;

        // bob arrive Month and Date
        int bobMonthD1 = (arriveBob[0])-48; 
        int bobMonthD2 = (arriveBob[1])-48;
        int bobAMonth = (bobMonthD1==0)?bobMonthD2 : bobMonthD1*10+bobMonthD2;
        int bobADay = ((arriveBob[3])-48)*10+(arriveBob[4])-48;

        // bob leave Month and Date
        int bobLMonthD1 = (leaveBob[0])-48; 
        int bobLMonthD2 = (leaveBob[1])-48;
        int bobLMonth = (bobLMonthD1==0)?bobLMonthD2 : bobLMonthD1*10+bobLMonthD2;
        int bobLADay = ((leaveBob[3])-48)*10+(leaveBob[4])-48;

        if(aliceLMonth<bobAMonth || (aliceLMonth==bobAMonth && aliceLDay<bobADay)){
            return 0;
        }
        unordered_map<int, int>yearMap;
        for(int i=1; i<=365; i++){
            yearMap[i]=0;
        }
        vector<int>v(13, 0);
        v[1]=mp[1];
        for(int i=2; i<=12; i++){
            v[i]=v[i-1]+mp[i];
        }
        for( int it : v){
            cout<<it<<" ";
        }
        int aliceAr = v[aliceMonth-1]+ aliceADay;
        int aliceLv = v[aliceLMonth-1]+ aliceLDay;
        int bobAr = v[bobAMonth-1]+bobADay;
        int bobLv = v[bobLMonth-1]+bobLADay;

        cout<<endl;
        cout<<aliceAr<<" "<<aliceLv<<" "<<bobAr<<" "<<bobLv<<endl;
        unordered_map<int, int>ans;

        for(int i=aliceAr; i<=aliceLv; i++){
            ans[i]++;
        }
        for(int i=bobAr; i<=bobLv; i++){
            ans[i]++;
        }
        int c=0;
        for(int i=0; i<=max(aliceLv, bobLv); i++){
            if(ans[i]==2) c++;
        }
        return c;
    }
};