#include<stack>
#include<string>
class Solution {
public:
    bool isValid(string s) {
         stack <char> c;
        for(char ch :s)
        {  
          if(ch=='('||ch=='{'||ch=='[')
          {
             c.push(ch);
          }
          else {
            if(c.empty())
             return false;

             char top = c.top();
           if((ch==')'&&top=='(')||(ch=='}'&&top=='{')||(ch==']'&&top=='['))
           {
            c.pop();
            }
            else
            return false;
            }}
        if(c.empty())
         return true;
        else
        return false;
    }
};