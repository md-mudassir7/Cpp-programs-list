#include<bits/stdc++.h>
using namespace std;
int maxValue(int arr[],int wt[],int w,int n)
{
    if(n==0 || w==0)
        return 0;
    if(wt[n-1]<=w)
        return max(arr[n-1]+maxValue(arr,wt,w-wt[n-1],n),maxValue(arr,wt,w,n-1));
    else
        return maxValue(arr,wt,w,n-1);
}
int main()
{
    int n;
    cin>>n;
    int arr[n],wt[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        wt[i]=i+1;
    }
    cout<<maxValue(arr,wt,n,n);
    return 0;
}
