#include<bits/stdc++.h>
using namespace std;
bool subsetSum(int arr[],int sum,int n,vector<vector<int>> &dp)
{
    if(sum==0)
    {
        return true;
    }
    if (n==0)
    {
        return false;
    }
    if(dp[n-1][sum]!=-1)
        return dp[n-1][sum];
    else if(arr[n-1]<=sum)
    {
        return dp[n-1][sum]=subsetSum(arr,sum-arr[n-1],n-1,dp) || subsetSum(arr,sum,n-1,dp);
    }
    else
        return dp[n-1][sum]=subsetSum(arr,sum,n-1,dp);
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int sum;
    cin>>sum;
    vector<vector<int>> dp(n,vector<int>(sum+1,-1));
    cout<<subsetSum(arr,sum,n-1,dp)<<endl;
    return 0;
}
