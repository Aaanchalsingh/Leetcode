class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> v;
        if(!root) return v;
        queue<TreeNode*> q;
        vector<int> v1;
        q.push(root);
        while(!q.empty()){
            int n=q.size();
            v1.clear();
            while(n--){
                TreeNode*p=q.front();
                v1.push_back(p->val);
                q.pop();
                if(p->left) q.push(p->left);
                if(p->right) q.push(p->right);
            }
            v.push_back(v1);
        }
        return v;
    }
};