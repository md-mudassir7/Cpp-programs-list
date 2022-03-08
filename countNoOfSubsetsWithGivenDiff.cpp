#include<bits/stdc++.h>
using namespace std;
int fun2(int arr[],int n,int sum)
{
    int dp[n+1][sum+1];
    for(int i=0;i<=n;i++)
        dp[i][0]=1;
    for(int i=0;i<=sum;i++)
        dp[0][i]=0;
    dp[0][0]=1;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=sum;j++)
        {
            if(arr[i-1]<=j)
                dp[i][j]=dp[i-1][j-arr[i-1]]+dp[i-1][j];
            else
                dp[i][j]=dp[i-1][j];
        }
    }
    return dp[n][sum];
}
int fun(int arr[],int n,int diff)
{
    int sum=0;
    for(int i=0;i<n;i++)
        sum+=arr[i];
    //We are required to find no of subsets s1 and s2 such that s1-s2=diff
    //We know s1+s2=sum of array(sum), hence s2=sum-s1
    //s1-s2=diff reduces to s1=(diff+sum)/2 , therefore we can just return the count of subsets with sum as (diff+sum)/2
    int reqSum = (sum+diff)/2;
    if(reqSum&1)
        return 0;
    else
        return fun2(arr,n,reqSum);
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int diff;
    cin>>diff;
    cout<<fun(arr,n,diff)<<endl;
    return 0;

}
