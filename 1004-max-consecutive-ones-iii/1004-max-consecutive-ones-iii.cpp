class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        
        int l =0;
        int r =0;
        int zero =0;
        int maxi =0;

        while(l<=r && r<nums.size())
        {
            int x = nums[r];
            if(x==0)
            zero++;
            while(zero>k)
            {
                if(nums[l]==0)
                zero--;

                l++;
            }

            maxi = max(r-l+1,maxi);
            r++;
        }

        return maxi;
    }
};