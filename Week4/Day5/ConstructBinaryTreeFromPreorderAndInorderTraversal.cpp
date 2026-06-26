class Solution {
public:
   
    TreeNode* creator(int &index,vector<int> &preorder, vector<int> &inorder,int start,int end)
        {   if(start >= end)
           { 
            return nullptr;
           }
            TreeNode* newnode = new TreeNode(preorder[++index]);
                for(int i =start;i<end;i++)
                {
                    if(inorder[i] == newnode -> val)
                    {
                      newnode -> left =   creator(index,preorder,inorder,start,i);
                       newnode -> right =  creator(index,preorder,inorder,i+1,end);
                        break;
                    }
                }
                return newnode;
            
        }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) 
    {
         int index = -1;
       return  creator(index, preorder,inorder, 0, inorder.size());
    }
};