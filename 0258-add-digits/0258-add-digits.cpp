class Solution {
public:
    int addDigits(int num) {
        
        while(num>9){
            int sum=0, lastdig;
        while(num!=0){
            lastdig=num%10;
            num/=10;
            sum+=lastdig;
        }
        num=sum;
        }
       return num; 
    }
};