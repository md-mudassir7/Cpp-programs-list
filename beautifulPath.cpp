#include<bits/stdc++.h>
using namespace std;
bool dfs(int src,vector<int> adj[],vector<int> &visited,int &dp,int &letter)
{
    visited[src]=1;
    for(int x : adj[src])
    {
        if(visited[x]==1)
            return true;
        if(visited[x]==0 && dfs(x,adj,visited,dp,letter))
            return true;
        for(int i=0;i<26;i++)
            dp[src][i]=max(dp[src][i],dp[x][i]);
    }
    dp[src][letter[src]++;
    visited[src]=2;
    return false;
}
int main()
{
    int v,e;
    cin>>v>>e;
    string s;
    cin>>s;
    vector<int> adj[v];
    for(int i=0;i<e;i++)
    {
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
    }


    int letter[v+1];
    for(int i=1;i<=v;i++)
    {
        letter[i]=s[i-1]-'a';
    }
    vector<int> visited(v+1,false);
    int dp[v+1][26];
    for(int i=1;i<=v;i++)
    {
        if(visited[i]==0 && dfs(i,adj,visited,dp,letter))
        {
            cout<<1<<endl;
            exit(0);
        }
    }
    int res=0;
    for(int i=0;i<=v;i++)
    {
        for(int i=0;i<26;i++)
        {
            res=max(res,dp[i][j]);
        }
    }
    cout<<res<<endl;
    return 0;
}
