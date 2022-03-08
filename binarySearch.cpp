#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int binarySearch(int arr[],int l,int r,int k)
{
    if(r>=l)
    {
        int mid=(r+l+1)/2;
        if(arr[mid]==k)
            return mid;
        else if(arr[mid]<k)
            return binarySearch(arr,mid+1,r,k);
        else
            return binarySearch(arr,l,mid-1,k);
    }
    return -1;

}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int k;
    cin>>k;
    cout<<binarySearch(arr,0,n-1,k)<<endl;
    return 0;
}
