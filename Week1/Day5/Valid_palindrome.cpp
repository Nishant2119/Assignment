class Solution {
public:
    bool isPalindrome(string s) {
        string ans="";
        string str;
        for (int i =s.length()-1;i>=0;i--)
        {
            if(s[i] >= 'a' && s[i] <= 'z' || s[i] >= 'A' &&  s[i] <= 'Z' || s[i] >= '0' && s[i] <= '9')
            {
                ans +=(char)tolower(s[i]);
            }
        }
        str=ans;
        reverse(ans.begin(),ans.end());
        if(str == ans)
        {
            return true;
        }
        else 
        {
            return false;
        }
    }
};