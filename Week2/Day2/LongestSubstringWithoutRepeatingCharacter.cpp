class Solution {
public:
    int lengthOfLongestSubstring(string s) 
    {
       map<char,bool> mp;
       int l=0,r=0,maxlen=0;
       while(r<s.length())
       {
        if(mp.find(s[r])!=mp.end())
        {
            while(s[l]!=s[r])
            {
                mp.erase(s[l]);
                l++;
            }
            l++;
        }
        else 
        {
            mp[s[r]]=true;
        }
        maxlen=max(maxlen,r-l+1);
        r++;
       }
      return maxlen;
    }
};