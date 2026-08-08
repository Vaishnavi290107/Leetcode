class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        unordered_map<int,int> m;
        int n = (nums.size())/2;
        for(int val:nums)
        {
            m[val]++;
        }
        for(int val :nums)
        {
            if(m[val]== n)
            return val;
        }
        return -1;
        
    }
};