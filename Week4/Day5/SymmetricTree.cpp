 class Solution {
public:
    bool isSymmetrichelp(TreeNode*left,TreeNode* right)
    {
        if(left== nullptr||right==nullptr) return left==right;
        if(left->val!=right->val) return false;
        return isSymmetrichelp(left->left,right->right)&&
        isSymmetrichelp(left->right,right->left);
    }
    bool isSymmetric(TreeNode* root) {
        return root==nullptr || isSymmetrichelp(root->left,root->right);
    }
};