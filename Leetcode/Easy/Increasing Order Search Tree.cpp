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
    TreeNode *ans,*res=NULL;
    void solve(TreeNode *root){
        if(!root)return;
        solve(root->left);
        ans->right=new TreeNode(root->val);
        ans=ans->right;
        solve(root->right);
    }
    TreeNode* increasingBST(TreeNode* root) {
        ans=new TreeNode(root->val);
        res=ans;
        solve(root);
        return res->right;
    }
};
