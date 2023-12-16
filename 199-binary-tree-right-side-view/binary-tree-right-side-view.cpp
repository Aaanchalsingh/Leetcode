class Solution {
public:
    void Right_View(TreeNode*p, int level, vector<int> &ans)
    {
        if (!p) return;
        if (level == ans.size()) ans.push_back(p->val);
        Right_View(p->right, level + 1, ans);
        Right_View(p->left, level + 1, ans);
    }
    vector<int> rightSideView(TreeNode* root) {
        vector<int> v;
        if(!root) return v;
        Right_View(root,0,v);
        return v;
    }
};