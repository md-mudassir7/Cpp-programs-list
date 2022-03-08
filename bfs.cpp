#include<bits/stdc++.h>
using namespace std;
vector<int>bfsOfGraph(int V, vector<int> adj[],int src)
{
    vector<int> res;
    queue<int> q;
    vector<int> visited(V,0);
	q.push(src);
    visited[src]=1;
    while(!q.empty())
    {
        int temp=q.front();
        q.pop();
        res.push_back(temp);
        for(int i:adj[temp])
        {
            if(!visited[i])
            {
                q.push(i);
                visited[i]=1;
            }
        }
    }
    return res;
}

int main(){
	int V, E,src;
    cin >> V >> E;
    vector<int> adj[V];
    for(int i = 0; i < E; i++)
    {
        int u, v;
        cin >> u >> v;
        if(i==0)
            src=u;
        adj[u].push_back(v);
    }
    vector<int>ans=bfsOfGraph(V, adj,src);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}
