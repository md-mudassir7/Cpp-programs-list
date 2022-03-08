#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int sum;
    cin>>sum;
    int dp[n+1][sum+1];



    for(int i = 0; i <= sum; i++)
        dp[0][i] = 0;
    for(int i = 0; i <= n; i++)
        dp[i][0] = 1;

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=sum;j++)
        {

            if(arr[i-1]<=j)
                dp[i][j] = dp[i-1][j-arr[i-1]] || dp[i-1][j];
            else
                dp[i][j]=dp[i-1][j];

        }
    }
    cout<<dp[n][sum]<<endl;
    return 0;
}

