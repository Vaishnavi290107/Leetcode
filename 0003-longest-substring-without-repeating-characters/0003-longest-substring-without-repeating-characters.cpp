class Solution {
public:
    int lengthOfLongestSubstring(string s) {

     int l =0;
     int r =0;
     int maxi=0;

    unordered_map<char,int> m;

     while(l<=r && r<s.size())
     {
        char ch = s[r];
        m[ch]++;
         while(m[ch]>1)
         {
            m[s[l]]--;
            l++;
         }
          
          maxi = max(r-l+1,maxi);
          r++;
     }   

     return maxi;
    }
};