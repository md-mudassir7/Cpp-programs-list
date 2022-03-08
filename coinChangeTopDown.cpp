
#include<bits/stdc++.h>
using namespace std;
int countWays(int ind,int sum,int arr[],int n)
{
    if(sum==0)
        return 1;
    if(ind>=n || sum<0)
        return 0;
    int choseCurrent=countWays(ind,sum-arr[ind],arr,n);
    int leaveCurrent=countWays(ind+1,sum,arr,n);
    return choseCurrent+leaveCurrent;
}
int countDP(int ind,int sum,int arr[],int n,vector<vector<int>> &dp)
{
    if(sum==0)
        return 1;
    if(ind>=n || sum<0)
        return 0;
    if(dp[ind][sum]!=-1)
        return dp[ind][sum];
    int choseCurrent=countDP(ind,sum-arr[ind],arr,n,dp);
    int leaveCurrent=countDP(ind+1,sum,arr,n,dp);
    return dp[ind][sum]=choseCurrent+leaveCurrent;
}
int main()
{
    int sum;
    cin>>sum;
    int m;
    cin>>m;
    int arr[m];
    for(int i=0;i<m;i++)
        cin>>arr[i];
    int dp[m+1][sum+1];
    for(int i=0;i<=m;i++)
    {
        dp[i][0]=1;
    }
    for(int i=0;i<=sum;i++)
        dp[0][i]=0;
    for(int i=1;i<=m;i++)
    {
        for(int j=1;j<=sum;j++)
        {
            if(arr[i-1]<=j)
                dp[i][j]=dp[i][j-arr[i-1]]+dp[i-1][j];
            else
                dp[i][j]=dp[i-1][j];
        }
    }
    cout<<dp[m][sum]<<endl;
    return 0;
}
