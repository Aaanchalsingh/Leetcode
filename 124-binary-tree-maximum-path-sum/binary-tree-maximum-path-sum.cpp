class Solution {
public:
    int ans=-1e9;
    int solve(TreeNode* root){
        if(!root) return 0;
        int left=max(solve(root->left),0);
        int right=max(solve(root->right),0);
        ans=max(ans,left+right+root->val);
        return root->val+max(left,right);
    }
    int maxPathSum(TreeNode* root) {
        solve(root);
        return ans;
    }
};