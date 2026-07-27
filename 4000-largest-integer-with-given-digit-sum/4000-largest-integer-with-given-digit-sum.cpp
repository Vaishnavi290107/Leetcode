class Solution {
public:
    int largestInteger(int n, int s) {
        int limit = pow(10,n)-1;
        long sum=0;
        int s1=n;
         for(int i = limit;i>=0;i--)
         {
           int val =i;
           sum =0;
           while(val>0)
           {
            sum = sum +val%10;
            val=val/10;
           }
            if(sum==s)
            {
            return i;
            }
           
            
         }
          return -1;
         
    }
};