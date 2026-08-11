class Solution {
public:
    int missingInteger(vector<int>& nums) {
     int j =1;
     int sum =nums[0];
      while( j<nums.size() && nums[j]==(nums[j-1]+1) )
      {
        sum +=nums[j];
        j++;
      }

      set<int> s;
      for(int val:nums)
       s.insert(val);

      while(s.find(sum)!=s.end())
      sum++;

      return sum;
    }
};