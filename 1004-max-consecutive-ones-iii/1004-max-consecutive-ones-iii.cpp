class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        
        int zero=0;
        int l =0;
        int len =0;
        int maxi =0;
        int n = nums.size();

       for(int i =0; i<n;i++)
       {
        int x = nums[i];
        if(x==0)
        zero++;

        while(zero>k)
        {
            if(nums[l]==0)
            zero--;

            l++;
        }

        len = i-l+1;
        maxi= max(len,maxi);
       }
         return maxi;
         }
};