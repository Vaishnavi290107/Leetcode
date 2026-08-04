class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int bada = *max_element(nums.begin(),nums.end());
        int chhota = *min_element(nums.begin(),nums.end());
        set<int> s1;
        for(int i = chhota ;i<=bada;i++)
        {
            s1.insert(i);
        }
        set<int>s2;
        for(int j =0; j<nums.size();j++)
        {
           s2.insert(nums[j]);
        }
        vector<int> diff;

    set_difference(s1.begin(), s1.end(),
                   s2.begin(), s2.end(),
                   back_inserter(diff));
        return diff;
        
    }
};