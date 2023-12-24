class Solution {
public:
    int ans=-1e9;
    int solve(TreeNode* root)
    {
        if(!root)return 0;
        int l=max(solve(root->left),0);
        int r=max(solve(root->right),0);
        int new_price=root->val+l+r;
        ans=max(ans,new_price);
        return root->val+max(l,r);
    }
    int maxPathSum(TreeNode* root) {
        solve(root);
        return ans;
    }
};