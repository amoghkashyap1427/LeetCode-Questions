class Solution {
public:
    int maxArea(vector<int>& height) {
        int ar=0;
        long lp=0, rp=height.size()-1;
        while(lp<rp){
            int h = min(height[rp], height[lp]);
            int w = rp-lp;
            ar=max(ar, (h*w));
            height[lp]<height[rp]?lp++:rp--;
        }
        // done using binary search technique
        return ar;
    }
};