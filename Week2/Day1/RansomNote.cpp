class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) 
    {
        int freq[26]={0};
        for (char x: magazine)
        {
           freq[x-'a']++;
        }
        for (char x: ransomNote)
        {
            if(freq[x-'a']>=1)
            {
                freq[x-'a']--;
            }
            else 
            {
                return false;
            }
        }
        return true;
    }
};