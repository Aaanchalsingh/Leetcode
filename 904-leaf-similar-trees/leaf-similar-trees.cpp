class Solution {
public:
    void pre(TreeNode* root, vector<int>& v) {
        if (!root) return;
        if (!(root->left || root->right)) v.push_back(root->val);
        pre(root->left, v);
        pre(root->right, v);   
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> v1{},v2{};
        pre(root1, v1);
        pre(root2, v2);
        return v1 == v2;
    }
};