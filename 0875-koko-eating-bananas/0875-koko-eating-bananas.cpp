class Solution {
public:
    int findMax(vector<int>& piles){
        int maxi= INT_MIN;
        int n=piles.size();
        for(int i=0; i<n; i++){
        maxi=max(maxi, piles[i]);
        }
        return maxi;
    }
    long long CalculateTotalhours(vector<int>& piles, int hour){
        long long totalhrs=0;
        int n=piles.size();
        for(int i=0; i<n; i++){
        totalhrs+=ceil((double)(piles[i])/(double)(hour));
        }
        return totalhrs;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int low=1; int high=findMax(piles);
        while(low<=high){
            int mid= (low+high)/2;
            long long totalhrs= CalculateTotalhours(piles, mid);
            if(totalhrs<=h){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return low;
    }
};