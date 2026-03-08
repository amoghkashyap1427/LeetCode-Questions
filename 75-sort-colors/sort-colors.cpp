class Solution {
public:
    void sortColors(vector<int>& nums) {
        int c0=0, c1=0, c2=0;
        for(int val : nums){
            if(val==0) c0++;
            if(val==1) c1++;
            if(val==2) c2++;
        }
        int c=0;
        while(c0>0){
            nums[c]=0;
            c++;
            c0--;
        }
        while(c1>0){
            nums[c]=1;
            c++;
            c1--;
        }
        while(c2>0){
            nums[c]=2;
            c++;
            c2--;
        }
    }
};