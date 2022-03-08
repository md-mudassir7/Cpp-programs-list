#include<bits/stdc++.h>
using namespace std;
float findSqrt(float n,float left,float right)
{
    float mid;
    while(left<=right)
    {
        mid=(left+right)/2;
        cout<<mid<<endl;
        if(mid*mid==n || (abs(mid*mid - n) < 0.00001))
        {
            return mid;
        }
        else if(mid*mid<n)
        {
            return findSqrt(n,mid,right);
        }
        else
            return findSqrt(n,left,mid);
    }
}
int main()
{
    float n;
    cin>>n;
    cout<<findSqrt(n,0,n)<<endl;
}
