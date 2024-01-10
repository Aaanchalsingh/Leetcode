class Solution {
public:
    void buildgraph(TreeNode* root,vector<vector<int>> &v,int par){
        if(!root) return;
        int val = root->val;
        if(par!=-1){
            v[par].push_back(val);
            v[val].push_back(par);
        }
        buildgraph(root->left,v,val);
        buildgraph(root->right,v,val);
    }
    int amountOfTime(TreeNode* root, int start) {
        vector<vector<int>> adj(100001);int ans=0;
        buildgraph(root,adj,-1);
        queue<pair<int,int>> q;
        unordered_set<int> s;
        q.push({start,0});
        s.insert(start);
        while(!q.empty()){
            int node=q.front().first;
            int time=q.front().second;
            q.pop();
            ans=max(ans,time);
            for(auto x:adj[node]){
                if(s.count(x)==0){
                    q.push({x,time+1});
                    s.insert(x);
                }
            }
        }
        return ans;
    }
};