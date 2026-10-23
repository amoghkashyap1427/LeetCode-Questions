class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        int n = image.size();
        vector<vector<int>>reverse;
        for(int i=0; i<n; i++){
            vector<int>temp;
            for(int j=n-1; j>=0; j--){
                temp.push_back(image[i][j]);
            }
            for(int j=0; j<n; j++){
                if(temp[j]==1){
                    temp[j]=0;
                } else if(temp[j]==0){
                    temp[j]=1;
                }
            }
            reverse.push_back(temp);
        }
        return reverse;
    }
};