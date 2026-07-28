#include<string>
class Solution {
public:
    string smallestPalindrome(string s) {
        int n = s.length();
        if(n<=2)
        return s;
        int freq[26] = {0};

        for (char c : s) {
        freq[c - 'a']++;
}
    string left="";
    string middle="";
    string right="";
    for(int i =0;i<26;i++)
    {
        left.append(freq[i] / 2, char(i + 'a'));
    }
    for(int i =0;i<26;i++)
    {
        if(freq[i]%2==1)
        {
        middle+=char(i+'a');
        break;
        }
    }
   right = left;
   reverse(right.begin(),right.end());
    string ans = ""+left+middle+right;
    return ans;

    }
};