class Solution {
public:
    bool checkDivisibility(int n) {
       int num =n;
       int sum =0;
       int product =1;

       while(num>0)
       {
        int dig = num%10;
         sum+=dig;
         num/=10;
       } 

       num= n;
       while(num>0)
       {
        int dig = num%10;
        product*=dig;
        num/=10;
       }

       int sum2 = sum+product;
       if(n%sum2==0)
       return true;
       else
       return false;

    }
};