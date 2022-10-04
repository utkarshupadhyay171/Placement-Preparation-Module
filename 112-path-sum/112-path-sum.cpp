/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    
    bool help(TreeNode*root,int k,int s)
    {
        
        if(root==NULL)
        {
            return false;
        }
        
        if(!root->left&&!root->right)
        {
            s+=root->val;
            if(s==k)
                return true;
            else 
                return false;
        }
        
        
        bool l=help(root->left,k,s+root->val);
        bool r=help(root->right,k,s+root->val);
        return l||r;
        
    }
    
    bool hasPathSum(TreeNode* root, int k) 
    {
        if(root==NULL) return false;
        return help(root,k,0);
    }
};