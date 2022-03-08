#include "bits/stdc++.h"
using namespace std;

const int N = 10005;
vector< int > g[N];
int vis[N], par[N], low[N], dis[N], ans[N];


void dfs( int u )
{
        static int t = 0;
        low[u] = dis[u] = ++t;
        vis[u] = 1;
        int child = 0;

        //cout<<u<<endl;

        for(auto v : g[u]) {
                if( !vis[v] ) {
                        par[v] = u;
                        dfs(v);
                        low[u] = min(low[u], low[v]);
                        child++;
                        if( dis[u] <= low[v] && (par[u] != -1 || child > 1) ) {
                                ans[u] = 1;
                        }
                } else if( v != par[u] ) {
                        low[u] = min( low[u], dis[v] );
                }
        }

}

void CLR()
{
        for(int i = 0; i < N; i++) {
                g[i].clear();
                vis[i] = par[i] = ans[i] = low[i] = dis[i] = 0;
        }
}


int main()
{
        int n, m;
        scanf("%d%d",&n,&m);

                CLR();
                int root;
                for(int i = 0; i < m; i++) {
                        int x, y; scanf("%d %d", &x, &y);
                        root = x;
                        g[x].push_back(y), g[y].push_back(x);
                }
                int cnt = 0;

                //cout << root << endl<<endl;
                par[root] = -1;
                dfs(root);

                for(int i = 0; i < N; i++) cnt += (ans[i] != 0);
                printf("%d\n", cnt);




        return 0;
}

