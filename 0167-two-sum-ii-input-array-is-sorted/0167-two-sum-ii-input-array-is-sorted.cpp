class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n=numbers.size();
        int st=0, end=n-1;
        int currsum=0;
        vector<int>ans;
        while(end>st){
            currsum=numbers[st]+numbers[end];
        if(currsum==target){
            ans.push_back(st+1);
            ans.push_back(end+1);
            return ans;
        }
        else if(currsum<target){
            st++;
        }
        else{
            end--;
        }
    }
    return ans;
    }
};