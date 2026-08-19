class Solution {
public:
    int maxArea(vector<int>& height) {
        int n= height.size();
        int l=0, r=n-1;
        int maxWater=0;
        while(l<r){
            int w=r-l;
            int ht=min(height[l],height[r]);
            int currWater=ht*w;
            maxWater=max(maxWater, currWater);
        if(height[l]<height[r]){
            l++;
        }
            else{
                r--;
            }
        }
            return maxWater;
    }
};