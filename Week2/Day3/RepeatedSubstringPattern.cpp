class Solution {
public:
    bool repeatedSubstringPattern(string s) 
    {
        string newstring = s+s;
        string substring = newstring.substr(1,(newstring.size()-2));
        return substring.contains(s);
    }
};