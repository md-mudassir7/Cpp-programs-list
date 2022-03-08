#include<bits/stdc++.h>
using namespace std;
int countWays(int sum,int arr[],int n)
{
    if(sum==0)
        return 1;
    if(n==0 || sum<0)
        return 0;
    int choseCurrent=countWays(sum-arr[n-1],arr,n);
    int leaveCurrent=countWays(sum,arr,n-1);
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
    cout<<"Brute force "<<countWays(sum,arr,m)<<endl;
    vector<vector<int>> dp(m,vector<int>(sum+1,-1));
    cout<<"DP 2d memoization "<<countDP(0,sum,arr,m,dp)<<endl;
    return 0;
}
