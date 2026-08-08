class Solution {
public:
    int maximumGap(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int diff =0;
        if(nums.size()<=1)
        return 0;
        for(int i =0; i<(nums.size()-1);i++)
        {
            int currdiff = nums[i+1]-nums[i];
            diff = max(currdiff , diff);
        }

        return diff;
    }
};