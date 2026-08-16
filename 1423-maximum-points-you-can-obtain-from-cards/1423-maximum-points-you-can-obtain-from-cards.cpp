class Solution {
public:
    int maxScore(vector<int>& nums, int k) {
     int sum =0;
     for(int i =0;i<k;i++)
     sum += nums[i];

     int n = nums.size();
     int rsum =0;
     int r = n-1; 
     int maxs = sum;

     for(int i = k-1;i>=0;i--)
     {
        sum-=nums[i];
        rsum +=nums[r];
        r--;

        maxs = max(maxs,rsum+sum);
     }   

     return maxs;

    }
};