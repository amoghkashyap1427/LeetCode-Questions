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

    void po(TreeNode* currentNode, vector<int>&res){
        if(currentNode==NULL) return;
        po(currentNode->left, res);
        po(currentNode->right, res);
        res.push_back(currentNode->val);
    }

    vector<int> postorderTraversal(TreeNode* root) {
        vector<int>res;
        po(root, res);
        return res;
    }
};