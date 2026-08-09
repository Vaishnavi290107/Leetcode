class Solution {
public:
    double minPrice(vector<int>& prices, vector<int>& discounts) {
        
        int size1 = discounts.size();
        int size2 = prices.size();
        int minrun = min(size1,size2);
        int minrun2 =size2-minrun;

        sort(discounts.begin(),discounts.end());
        sort(prices.begin(),prices.end());

         double sum =0;
         
        while(minrun>0)
        {
            double d = (100.0-discounts[size1-1])/100.0;
          sum+=d*prices[size2-1];
            size2--;
            size1--;
            minrun--;
        }
       
        for(int i =0; i<minrun2;i++)
        {
           sum+=prices[i];
        }
         return sum;
    }
    
};