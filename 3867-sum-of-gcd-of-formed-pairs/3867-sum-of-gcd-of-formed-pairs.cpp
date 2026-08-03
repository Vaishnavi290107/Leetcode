class Solution {
public:
    long long gcdSum(vector<int>& nums) {
       
        vector<int> prefix;
        int mx1=INT_MIN;
        int n = nums.size();
        for(int i =0;i<n;i++)
        {
            mx1= max(nums[i],mx1);
            prefix.push_back(gcd(nums[i],mx1));
        }
        sort(prefix.begin(),prefix.end());
        int p =0;
        int q = nums.size()-1;
        long long sum =0;
        while(p<q)
        {
           sum =sum+( long long)gcd(prefix[p],prefix[q]);
           p++;
           q--;
        } 
        return sum;
    }
};