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
    void io(TreeNode* curr, vector<int>&res){
        if(curr==NULL) return;
        io(curr->left, res);
        res.push_back(curr->val);
        io(curr->right, res);
    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int>res;
        io(root, res);
        return res;
    }
};