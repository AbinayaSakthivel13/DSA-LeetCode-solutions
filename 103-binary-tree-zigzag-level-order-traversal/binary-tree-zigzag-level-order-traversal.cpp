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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        if(!root) return {};
        queue<TreeNode*>q;
        q.push(root);
        vector<vector<int>> res;
        int flag =0;
        while(!q.empty())
        {
            int size = q.size();
            vector<int>temp(size);
            for(int i=0;i<size;i++)
            {
                TreeNode* x = q.front();
                q.pop();
                if(x->left)q.push(x->left);
                if(x->right)q.push(x->right);
                int index = (flag==0)?i:(size-i-1);
                temp[index] = x->val;
            }
            if(flag==0) 
                flag++;
            else
                flag--;
            res.push_back(temp);
        }
        return res;
    }
};