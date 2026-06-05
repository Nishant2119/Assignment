class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) 
    {
        int orgrow=0,orgcol=-1;
        if(mat.size()*mat[0].size()!=r*c)return mat;
        vector<vector<int>>ans;
        for (int i =0;i<r;i++)
        {
            vector<int> temp;
            for (int j = 0 ; j< c;j++)
            {
                int row,col;
                if(orgcol<(int)mat[0].size()-1)
                {
                    orgcol++;
                    
                }
                else 
                {
                    orgrow++;
                    orgcol = 0;
                }
                row=orgrow;
                col=orgcol;
                temp.push_back(mat[row][col]);
            }
            ans.push_back(temp);
        }
         return ans;
        
        
    }
};
