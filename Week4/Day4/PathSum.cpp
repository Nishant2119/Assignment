class Solution {
public:
    bool status = false;
    void inorder(TreeNode* root , int target)
    {
        
        if(root != nullptr)
        {
            target = target - root -> val;
            if(target == 0 && root -> left == nullptr && root -> right == nullptr) status =  true;
            inorder(root -> left,target );
            inorder(root -> right,target);
        }
        
    }
    bool hasPathSum(TreeNode* root, int targetSum) 
    {
         inorder(root ,targetSum);
         return status;
    }
};