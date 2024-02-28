class Solution {
public:
   
    int findBottomLeftValue(TreeNode* root) {
        if(!root) return 0;
        queue<TreeNode*> q;
        q.push(root);
        vector<vector<int>> v;
        vector<int> result;
        while(!q.empty()){
            int n=q.size();
            while(n--){
                TreeNode*r=q.front();
                result.push_back(r->val);
                q.pop();
                if(r->left) q.push(r->left);
                if(r->right) q.push(r->right);
            }
            v.push_back(result);
            result.clear();
        }
        int k=v.size();
        return v[k-1][0];
    }
};