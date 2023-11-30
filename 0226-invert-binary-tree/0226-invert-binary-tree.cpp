class Solution {
public:
    TreeNode* invertTree(TreeNode* p) {
        if(!p) return NULL;
        TreeNode* temp=p->right;
        p->right=p->left;
        p->left=temp;
        invertTree(p->right);
        invertTree(p->left);
        return p;
    }
};