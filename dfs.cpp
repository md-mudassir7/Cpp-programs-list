#include<bits/stdc++.h>
using namespace std;
vector<int> res;
void dfs(int src,vector<int> &visited,vector<int> adj[])
{
    visited[src]=1;
    res.push_back(src);
    for(auto i:adj[src])
    {
        if(!visited[i])
            dfs(i,visited,adj);
    }
}
vector<int>dfsOfGraph(int V, vector<int> adj[])
{
    vector<int> visited(V,0);
    dfs(0,visited,adj);
    return res;
}
int main(){
	int V, E;
    cin >> V >> E;
    vector<int> adj[V];
    for(int i = 0; i < E; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    vector<int>ans=dfsOfGraph(V, adj);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}
