class Solution {
public:
    void rotate(vector<vector<int>>& mat) {
        int n=mat.size();
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                swap(mat[i][j],mat[j][i]);
            }
        }
        for(int rows=0; rows<n; rows++){
            int startcol=0;
            int endcol=n-1;
            while(startcol<=endcol){
                swap(mat[rows][startcol],mat[rows][endcol]);
                startcol++;
                endcol--;
            }
        }
    }
};