#include<bits/stdc++.h>
using namespace std;
int knapsack(int w[],int v[],int weight,int n,vector<vector<int>> &dp)
{
    if(n==0 || w==0)
        return 0;
    if(dp[n-1][weight]!=-1)
        return dp[n-1][weight];
    if(w[n-1]<=weight)
    {
        int include=v[n-1]+knapsack(w,v,weight-w[n-1],n-1,dp);
        int exclude=knapsack(w,v,weight,n-1,dp);
        return dp[n-1][weight]=max(include,exclude);
    }
    else
        return dp[n-1][weight]=knapsack(w,v,weight,n-1,dp);
}
int main()
{
    int n;
    cin>>n;
    int w[n],v[n];
    for(int i=0;i<n;i++)
    {
        cin>>w[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }



    int weight;
    cin>>weight;
    vector<vector<int>> dp(n,vector<int>(weight+1,-1));
    cout<<knapsack(w,v,weight,n,dp)<<endl;
    return 0;
}
