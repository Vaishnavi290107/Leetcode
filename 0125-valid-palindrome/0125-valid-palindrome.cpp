class Solution {
public:
    bool isPalindrome(string s) {
        vector<char> letter;
        for(char ch :s)
        {  
          if(isalnum(ch))
          {
            ch= tolower(ch);
           letter.push_back(ch);
        }}
        int n = letter.size();
        for(int i =0; i<n;i++)
        {
          if(letter[i]!=letter[n-1-i])
          return false;
        }
        return true;
    }
};