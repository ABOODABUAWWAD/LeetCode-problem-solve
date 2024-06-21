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
    vector<int> inorderTraversal(TreeNode* root) {
    vector <int> treeelement;
    inorder(root,treeelement);
        return treeelement;
    }
    void inorder(TreeNode* root,vector<int> &treeelement){
        if(root==NULL) ;
        else{
            inorder(root->left,treeelement);
            treeelement.push_back(root->val);
            inorder(root->right,treeelement);
        }
    }
};