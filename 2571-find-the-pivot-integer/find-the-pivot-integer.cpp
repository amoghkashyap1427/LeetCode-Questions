class Solution {
public:
    int pivotInteger(int n) {
        vector<int>pre;
        vector<int>post;
        int s1=0;
        for(int i=1; i<=n; i++){
            s1+=i;
            pre.push_back(s1);
        }
        int s2=0;
        for(int i=n; i>=1; i--){
            s2+=i;
            pre.push_back(s2);
        }
        for(int i=post.size()-1; i>=0; i--){
            int x = post[i];
            pre.push_back(x);
        }
        int left=0, right=pre.size()-1;
        while(left<right){
            if(pre[left]==pre[right]){
                return left+1;
            }
            left++;
            right--;
        }
        return -1;
    }
};