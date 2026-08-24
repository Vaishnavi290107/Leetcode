class Solution {
public:
    int maxArea(vector<int>& nums) {
      int lp=0;
      int n = nums.size();
      int rp =n-1;
      long maxw=0;
      while(lp<rp)
      {
         int ht = min(nums[lp],nums[rp]);
         int wd= rp-lp;
         long water = ht*wd;
         maxw= max(maxw,water);
         nums[lp]<nums[rp]?lp++:rp--;
      }
       return maxw;
    }
};