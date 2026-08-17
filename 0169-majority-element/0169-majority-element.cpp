class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int majority=0, lead=0;
        int n=nums.size();
        for(int i=0; i<n; i++){
            if(lead==0){
                majority=nums[i];
                lead++;
            }
            else if(majority==nums[i]){
                lead++;
            }
            else{
                lead--;
            }
        }
        return majority;
    }
};