class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int ans1=0, ans2=0;
        for(int i=0; i<n; i++){
            ans1=ans1^nums[i];
            ans2=ans2^i;
        }
        ans2^=n;
        return ans1^ans2;
    }
};