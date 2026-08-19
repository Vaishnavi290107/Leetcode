class Solution {
public:
    int maximumLengthSubstring(string s) {
        
        unordered_map<char,int> m;
        int l=0;
        int r =0;
        int maxi =0;

        while(l<=r && r<s.size())
        {
            char ch = s[r];
            m[ch]++;

            if(m[ch]==3)
            {
                while(m[ch]!=2)
                {
                    m[s[l]]--;
                    l++;                    
                }
            }

            int len = r-l+1;
            maxi = max(len,maxi);
            r++;
        } 

        return maxi ;
    }
};