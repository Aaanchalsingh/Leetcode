class Solution {
public:
    TreeNode* invertTree(TreeNode* p) {
        if(!p) return NULL;
        TreeNode* temp=p->right;
        p->right=p->left;
        p->left=temp;
        invertTree(p->left);
        invertTree(p->right);
        return p;
    }
};