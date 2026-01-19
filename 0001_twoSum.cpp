#include <vector>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int sz=nums.size();
        int c=0;
        vector<int>vec;
        for(int i=0; i<sz; i++){
            for(int j=i+1; j<sz; j++){
                if((nums[i]+nums[j])==target){
                    vec.push_back(i);
                    vec.push_back(j);
                    c=1;
                    break;
                }
            }
            if(c==1){
                break;
            }
        }
        return vec;
    }
};