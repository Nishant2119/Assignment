class Solution {
public:
    int maxdepth=0;
    void depth(TreeNode* root,int count)
    {
        if(root!=nullptr)
        {
            depth(root->left,++count);
            count--;
            depth(root->right,++count);
            count--;
        }
        else 
        {
            maxdepth = max(maxdepth,count);
        }
    }
    int maxDepth(TreeNode* root) 
    {
        depth(root,0);
        return maxdepth;
    }
};