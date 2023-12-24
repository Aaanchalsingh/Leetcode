class Solution {
public:
    TreeNode* invertTree(TreeNode* p) {
        if(!p) return NULL;
        swap(p->right,p->left);
        invertTree(p->left);
        invertTree(p->right);
        return p;
    }
};