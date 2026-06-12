class Solution {
public:
    string longestPalindrome(string s) 
    {
        string ans="";
        for (int i =0;i < s.size(); i++)
        {
            int low = i,high=i;
            while(low>-1 && high <s.size())
            {
                if(s[low]==s[high]) 
                {
                    low--;
                    high++;
                }
                else 
                {
                    break;
                }
            }
            if(s.substr(low+1,high-low-1).size()>ans.size()) ans = s.substr(low+1,high-low-1);
            low = i-1,high=i;
            while(low> -1 && high <s.size())
            {
                if(s[low]==s[high]) 
                {
                    low--;
                    high++;
                }
                else 
                {
                    break;
                }
            }
            if(s.substr(low+1,high-low-1).size()>ans.size()) ans = s.substr(low+1,high-low-1);
        }
        return ans;
    }
};