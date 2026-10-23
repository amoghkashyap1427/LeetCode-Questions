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
    void po(TreeNode* currrentNode, vector<int>&res){
        if(currrentNode==NULL) return;
        res.push_back(currrentNode->val);
        po(currrentNode->left, res);
        po(currrentNode->right, res);
    }
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int>res;
        po(root, res);
        return res;
    }
};