class Solution {
#include <cmath>
public:
    bool isPalindrome(int x) {
        int y =x;
        long long reverse=0;
        int l =0 ;
        if(y<0)
        return false;
        else{
        while(y!=0)
        {
            y= y/10;
            l++;
        }
        y=x;
        l--;
        while(y!=0)
        {
            reverse=reverse*10+ y%10;
            y=y/10;
            
        }
        if(reverse==x)
        return true;
        else
        return false;
    }}
};