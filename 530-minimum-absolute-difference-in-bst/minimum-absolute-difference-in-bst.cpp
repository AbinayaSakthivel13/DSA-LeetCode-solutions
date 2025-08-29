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
    int diff=INT_MAX, num=-1;
    int getMinimumDifference(TreeNode* root) {
        helper(root);
        return diff;
    }
    void helper(TreeNode* root){
        if(!root)   return;
        helper(root->left);
        if(num!=-1)
            diff=min(diff,abs(num-root->val));
        num=root->val;
        helper(root->right);
    }
};