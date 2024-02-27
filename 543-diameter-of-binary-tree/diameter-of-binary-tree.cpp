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
    int height(TreeNode* p){
        if (!p)return 0;
        int x = height(p->left);
        int y = height(p->right);
        return max(x, y) + 1;}
    int diameterOfBinaryTree(TreeNode* p) {
        if (!p)return 0;
        int x = diameterOfBinaryTree(p->left);
        int y = diameterOfBinaryTree(p->right);
        int k = height(p->left) + height(p->right);
    return max(x, max(y, k));
    }
};