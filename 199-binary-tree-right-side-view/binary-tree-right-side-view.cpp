class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        vector<int> v;
        if(!root) return v;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            int n=q.size();
            v.push_back(q.front()->val);
            while(n--){
                TreeNode*p=q.front();
                q.pop();
                if(p->right) q.push(p->right);
                if(p->left) q.push(p->left);
            }
        }
        return v;
    }
};