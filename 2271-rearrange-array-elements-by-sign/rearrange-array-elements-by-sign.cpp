class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>pos;
        vector<int>neg;
        for(int it:nums){
            if(it>0){
                pos.push_back(it);
            }
            if(it<0){
                neg.push_back(it);
            }
        }
        vector<int>ans(pos.size()+neg.size(), 0);
        int c=0, d=0;
        for(int i=0; i<ans.size(); i++){
            if(i%2==0){
                ans[i]=pos[c++];
            } else {
                ans[i]=neg[d++];
            }
        }
        return ans;
    }
};