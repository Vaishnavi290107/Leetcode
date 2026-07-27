class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxprod= INT_MIN;
        int index1,index2;
        for(int i =0;i<nums.size();i++)
        {
          for(int j = i+1;j<nums.size();j++ )
          {
            int prod = nums[i]*nums[j];
            if(prod>maxprod)
            {
                maxprod= prod;
                index1 = i;
                index2=j;
          }}
        }

        int ans = (nums[index1]-1)*(nums[index2]-1);
        return ans;
        
        
    }
};