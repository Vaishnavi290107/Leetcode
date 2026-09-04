class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
    int n = nums.size();

        for (int i = 0; i < n; i++) {

            int large = INT_MIN;
            for (int j = 0; j <= i; j++)
                large = max(large, nums[j]);

            int small = INT_MAX;
            for (int p = i; p < n; p++)
                small = min(small, nums[p]);

            int instability = large - small;

            if (instability <= k)
                return i;
        }

        return -1;
    }
};