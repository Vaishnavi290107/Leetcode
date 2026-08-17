class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        unordered_map<char,int> p;
        int l =0;
        int r = l;
        int maxi = 0;

        for(char ch : s)
        p[ch]=-1;

        char ch;

        while(l<=r & r<s.size())
        {
            ch= s[r];
            if(p[ch]!=-1)
            {
              if(p[ch]>=l)
              l=p[ch]+1;
            }
            int len = r-l+1;
            maxi = max(maxi,len );

         p[ch]=r;
         r++;  
        }
return maxi;

        }
    };