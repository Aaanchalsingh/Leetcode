class Solution {
public:
    int height(TreeNode* p) {
        if (!p)
            return 0;
        int x = height(p->left);
        int y = height(p->right);
        return max(x, y) + 1;
    }
    int diameterOfBinaryTree(TreeNode* p) {
        if (!p)
            return 0;
        int x = diameterOfBinaryTree(p->left);
        int y = diameterOfBinaryTree(p->right);
        int k = height(p->left) + height(p->right);
        return max(x, max(y, k));
    }
};