class Solution {
public:
    int mySqrt(int x) {
        int c=0;
        int st=1, end=x;long long mid;
        while(st<=end){
            mid=st+(end-st)/2;
            if(mid*mid==x){
                return mid;
            }
            if(mid*mid<x){
                st=mid+1;
            }
            else{
                end=mid-1;
            }
        }
        return end;
    }
};