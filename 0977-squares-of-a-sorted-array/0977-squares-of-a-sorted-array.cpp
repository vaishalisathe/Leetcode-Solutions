class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size();
        int start =0;
        int end=n-1;
        vector<int>ans(n);
        int i=n-1;
        while(start<=end){
           int sSquare= nums[start]*nums[start];
            int eSquare= nums[end]*nums[end];
            if(sSquare<eSquare){
                ans[i]=eSquare;
                end--;
            }
            else{
                ans[i]=sSquare;
                start++;
            }
            i--;
        }
        return ans;
    }
};