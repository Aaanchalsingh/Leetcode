class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(root){
            int x=maxDepth(root->left);
            int y=maxDepth(root->right);
            return max(x,y)+1;
        }
        return 0;
    }
};