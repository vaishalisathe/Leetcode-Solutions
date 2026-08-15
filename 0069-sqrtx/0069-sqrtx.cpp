class Solution {
public:
    int mySqrt(int x) {
        if(x<0)
        return 0;
        int st=0;
        int end=x;
        int res=1;
        while(end>=st){
            long long mid=(st+end)/2;
            if(mid*mid==x)
            return mid;
            else if(mid*mid>=x){
                end=mid-1;
            }
            else{
                res=mid;
                st=mid+1;
            }
        }
        return res;
    }
};