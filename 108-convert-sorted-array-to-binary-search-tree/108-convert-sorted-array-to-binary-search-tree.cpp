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
    TreeNode*help(vector<int>a,int l,int r)
    {
        if(l>r) return NULL;
        int mid=l+(r-l)/2;
        TreeNode*node=new TreeNode(a[mid]);
        node->left=help(a,l,mid-1);
        node->right=help(a,mid+1,r);
        return node;
    }
    
    TreeNode* sortedArrayToBST(vector<int>& nums) 
    {
        int n=nums.size();
        if(n<=0) return NULL;
        return help(nums,0,n-1);
    }
};