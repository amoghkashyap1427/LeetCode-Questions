class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>vec(2,-1);
        int st=0, end=nums.size()-1;
        while(st<=end){
            int mid = st+(end-st)/2;
            if(nums[mid]==target){
                vec[0]=mid;
                end=mid-1;
            } else if(nums[mid]<target){
                st=mid+1;
            } else {
                end=mid-1;
            }
        }

        st=0, end=nums.size()-1;
        while(st<=end){
            int mid = st+(end-st)/2;
            if(nums[mid]==target){
                vec[1]=mid;
                st=mid+1;
            } else if(nums[mid]<target){
                st=mid+1;
            } else {
                end=mid-1;
            }
        }
        return vec;
    }
};