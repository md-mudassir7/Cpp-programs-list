#include <bits/stdc++.h>
#define ll long long int
using namespace std ;


int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        ll a[n+1]={0};
        ll dp1[n+1]={0};
        ll dp2[n+1]={0};
        ll i = 1  ;
        while(i<=n)
        {
            cin>>a[i];
            i++;
        }

        if(a[1]%2!=0)
        {
        dp2[1] = 1 ;
        }
        else
        {
        dp1[1] = 1 ;
        }

        i=2;
        while(i<=n)
        {

            ll s1 = 0 ;
            ll s2 = 0 ;
            ll co =  0 ;
            if(a[i]%2==0)
            {
                ll j = 1  ;
            while(co<k && i-j>=1)
            {
                s1 = s1 + dp1[i-j];
                s2 = s2 + dp2[i-j];
                j++;
                co++;
            }

            }
            else
            {
                 ll j = 1  ;
                while(co<k && i-j>=1)
            {
                s1 = s1 + dp2[i-j] ;
                s2 = s2 + dp1[i-j] ;
                j++;
                co++;

            }

            }
            dp1[i] = s1  ;
            dp2[i] = s2 ;


            i++;
        }

        cout<<dp1[n]<<" "<<dp2[n]<<"\n";
    }
    return 0 ;
}
