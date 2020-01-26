/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    void _inorder(TreeNode* root,vector<int>& v){
        if(root != NULL){
            _inorder(root->left,v);
            v.push_back(root->val);
            _inorder(root->right,v);
        }
    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> v;
        _inorder(root,v);
        return v;
    }
};
