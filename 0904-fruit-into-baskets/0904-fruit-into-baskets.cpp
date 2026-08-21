class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        
        int  l =0;
        int r =0 ;
        int maxi =0; 

        unordered_map<int, int> m ;

        while(l<=r && r<fruits.size())
        {
            m[fruits[r]]++;
            while(m.size()>2)
            {
                m[fruits[l]]--;
                if(m[fruits[l]]==0)
                m.erase(fruits[l]);

                l++;
            }
            
            maxi = max(r-l+1,maxi);
            r++;
        }

        return maxi;

    }
};