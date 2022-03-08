
#include<bits/stdc++.h>
using namespace std;
float findSqrt(float left,float right,float n,int p)
{
    float mid;
    float ans;
    while(left<=right)
    {
        mid=(left+right)/2;
        if(mid*mid==n || (abs(mid*mid - n) < 0.00001))
        {
            ans=mid;
            break;
        }
        else if(mid*mid<n)
        {
            left=mid;
        }
        else
            right=mid;
    }
    float inc=0.1;
    cout<<ans<<endl;

    for(int i=0;i<p;i++)
    {
        cout<<i<<" "<<ans<<endl;
        while(ans*ans<=n)
        {
            ans+=inc;
        }
        ans-=inc;
        inc/=10;
    }
    return ans;
}
int main()
{
    float n;
    int p;
    cin>>n>>p;
    cout<<findSqrt(0,n,n,p)<<endl;
}
