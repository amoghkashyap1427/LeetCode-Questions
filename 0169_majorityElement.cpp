#include <vector>
using namespace std;
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int sz=nums.size();
        int c=0; int ans;
        for (int i=0; i<sz; i++){
            if(c==0){
                ans=nums[i];
            }
            if(ans==nums[i]){
                c++;
            }
            else{
                c--;
            }
        } 
        
        return ans;
    }
};