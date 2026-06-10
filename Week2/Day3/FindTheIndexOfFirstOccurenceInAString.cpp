class Solution {
public:
    int strStr(string haystack, string needle) 
    {
        int i=0;
        while(i<=((int)haystack.size()-(int)needle.size()))
        {
        if(haystack.substr(i,needle.size())==needle) return i;
         i++;
        }
        return -1;
    }
};