class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        if(!root) return {};
        queue<TreeNode*> q;
        q.push(root);
        vector<int> result;
        while(!q.empty()){
            int n=q.size();
            result.push_back(q.front()->val);
            while(n--){
                TreeNode*r=q.front();
                q.pop();
                if(r->right) q.push(r->right);
                if(r->left) q.push(r->left);
            }
        }
        return result;
    }
};