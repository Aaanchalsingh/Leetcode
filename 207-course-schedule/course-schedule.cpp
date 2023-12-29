class Solution {
public:
    vector<int> topoSort(int V, vector<int> adj[]) {
	    vector<bool> visited(V+1,false);
	    vector<int> indegree(V+1,0),v;
	    queue<int> q;
	    for(int i=0;i<V;i++){
	        for(auto x:adj[i]) indegree[x]++;
	    }
	    for(int i=0;i<V;i++){
	        if(indegree[i]==0){
	            q.push(i);
	            v.push_back(i);
	        }
	    }
	    while(!q.empty()){
	        int t=q.front();
	        q.pop();
	        for(auto x:adj[t]){
	            indegree[x]--;
	            if(indegree[x]==0){
    	            q.push(x);
    	            v.push_back(x);
	            }
	        }
	    }
        return v;
	}
    bool canFinish(int N, vector<vector<int>>& pre) {
        vector<int> v[N];int P=pre.size();
	    for (int i = 0; i < P; i++) 
	        v[pre[i][1]].push_back(pre[i][0]);
	        
	    vector<int> ans;
	    ans=topoSort(N,v);
	    return ans.size()==N;
    }
};