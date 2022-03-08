#include<iostream>
#include<bits/stdc++.h>
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        scanf("%lld",&n);
        ll A[n+2][n+2]={0};
        for(int i=0;i<=n+1;i++)
        {
            A[0][i]=0;
            A[n+1][i]=0;
            A[i][0]=0;
            A[i][n+1]=0;
        }
        for(ll i=1;i<=n;i++)
            for(ll j=1;j<=n;j++)
                scanf("%d",&A[i][j]);

        for(ll i=1;i<=n;i++)
        {
            for(ll j=1;j<=n;j++)
                printf("%lld",(A[i][j]+A[i][j-1]+A[i][j+1]+A[i-1][j]+A[i+1][j]+A[i-1][j-1]+A[i+1][j+1]+A[i-1][j+1]+A[i+1][j-1]+1)%2);
        printf("\n");
        }
    }
}

