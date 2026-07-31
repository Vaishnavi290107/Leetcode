class Solution {
public:
    int minimumPushes(string word) {
        int n = word.size();
     if(n<=8)
     return n*1;
     else if(n<=16 )
     return (n-8)*2+8;
     else if(n<=24)
     return (n-16)*3+24;
     else if(n<=26)
     return 48+(n-24)*4; 
     else
     return 0;
    }
};