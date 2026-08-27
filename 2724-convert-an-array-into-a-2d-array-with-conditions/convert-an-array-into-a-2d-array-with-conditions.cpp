class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        vector<vector<int>>vec;

        for(int x : nums){
            int c = 0;

            while(c < vec.size()){
                if(find(vec[c].begin(), vec[c].end(), x) == vec[c].end()){
                    vec[c].push_back(x);
                    break;
                }
                c++;
            }

            if(c == vec.size()){
                vec.push_back({x});
            }
        }

        return vec;
    }
};