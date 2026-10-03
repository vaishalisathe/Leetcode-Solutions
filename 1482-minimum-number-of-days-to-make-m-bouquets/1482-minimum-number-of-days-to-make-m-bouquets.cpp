class Solution {
public:
bool possible(vector<int>& bloomDay, int day, int m, int k){
    int count=0, noOfB=0;
    int n=bloomDay.size();
    for(int i=0; i<n; i++){
    if(bloomDay[i]<=day){
        count++;
    }
    else{
        noOfB+=(count/k);
        count=0;
    }
    }
      noOfB+=(count/k);
      if(noOfB>=m) return true;
      else return false;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        int n=bloomDay.size();
        long long val=m*1LL*k;
        if(val>n) return -1;
        int mini=INT_MAX, maxi=INT_MIN;
        for(int i=0; i<n; i++){
        mini= min(mini,bloomDay[i]);
        maxi= max(maxi,bloomDay[i]);
        }
        int low=mini, high=maxi;
        while(low<=high){
            int mid=(low+high)/2;
            if(possible(bloomDay, mid, m, k)){
            high= mid-1;
        }
        else{
            low=mid+1;
        }
        }
        return low;
    }
};