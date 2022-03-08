#include<bits/stdc++.h>
using namespace std;
int getMaxSum(int n)
{
    int dp[n+1]={0};
    for(int i=1;i<=n;i++)
    {
        dp[i]=max(i,dp[i/2]+dp[i/3]+dp[i/4]);
    }
    return dp[n];
}
int main()
{
    //A number n can be broken into three parts n/2, n/3 and n/4 (consider only integer part).
    //Each number obtained in this process can be divided further recursively.
    //Find the maximum sum that can be obtained by summing up the divided parts together.
    int n;
    cin>>n;
    cout<<getMaxSum(n)<<endl;
    return 0;
}
