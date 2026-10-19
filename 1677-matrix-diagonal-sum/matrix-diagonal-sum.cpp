class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();
        int s=0;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(i==j || (i+j)==n-1){
                    s+=mat[i][j];
                }
            }
        }
        return s;
    }
};