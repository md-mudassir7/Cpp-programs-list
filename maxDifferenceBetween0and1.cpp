#include<iostream>
#include<bits/stdc++.h>
#define ll long long int
using namespace std;
ll maxSubstring(string S)
{
    ll n=S.length();
    ll dp[n],ocnt=0;
    for(ll i=0;i<n;i++)
    {
        if(S[i]=='1')
        {
            dp[i]=-1;
            ocnt++;
        }
        else
            dp[i]=1;
    }
    if(ocnt==n)
        return -1;
    ll res=-1,tmax=0;
    for(ll i=0;i<n;i++)
    {
        tmax+=dp[i];
        if(tmax<0)
            tmax=0;
        res=max(res,tmax);
    }
    return res;

}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   	ll t;
   	cin >> t;
   	while(t--)
   	{
   		string s;
   		cin >> s;

   		cout << maxSubstring(s) << "\n";
   	}

    return 0;
}
