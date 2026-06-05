class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) 
    {
        string common = strs[0];
        string newcommon="" ;
        for (int i =1;i<strs.size();i++)
        {
            int j =0;
            while(j<min(common.size(),strs[i].size()))
            {
                if(common[j] == strs[i][j])
                {
                    newcommon += common[j];
                    j++;
                 }
                else
                {
                    break;
                }
            }
            common = newcommon;
            newcommon="";
        }
        return common;
    }
};