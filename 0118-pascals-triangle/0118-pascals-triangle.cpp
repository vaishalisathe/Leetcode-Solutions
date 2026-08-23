class Solution {
public:
    vector<int> generateRows(int numRows) {
        long long ans=1;
        vector<int>ansrows;
        ansrows.push_back(1);
        for(int col=1; col<numRows; col++){
            ans=ans*(numRows-col);
            ans=ans/col;
            ansrows.push_back(ans);
        }
        return ansrows;
    }
    vector<vector<int>> generate(int N) {
        vector<vector<int>>ans;
        for(int i=1; i<=N; i++){
            ans.push_back(generateRows(i));
        }
        return ans;
    }
};