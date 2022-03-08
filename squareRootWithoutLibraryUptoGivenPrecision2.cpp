#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    float ans;
    int s=0,e=n;
    while(s<=e)
    {
        int mid=(s+e)/2;
        if(mid*mid==n)
        {
            ans=mid;
            break;
        }
        else if(mid*mid<n)
        {
            s=mid+1;
            ans=mid;
        }
        else
            e=mid-1;
    }
    float inc=0.1;
    for(int i=0;i<k;i++)
    {
        while(ans*ans<=n)
            ans+=inc;
        ans-=inc;
        inc/=10;
    }
    cout<<ans<<endl;
}
