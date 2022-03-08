#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
int binomialCoefficient(int n,int r,vector<vector<int>> &dp)
{
    if(r==0 || n==r)
        return 1;
    if(dp[n][r]!=-1)
        return dp[n][r];
    return dp[n][r]=(binomialCoefficient(n-1,r-1,dp)%mod+binomialCoefficient(n-1,r,dp)%mod)%mod;
}
int main()
{
    int n,r;
    cin>>n>>r;
    if(n>=r)
    {
        vector<vector<int>> dp(n+1,vector<int>(r+1,-1));
        cout<<binomialCoefficient(n,r,dp)<<endl;
    }


    else
        cout<<0<<endl;
    return 0;
}
