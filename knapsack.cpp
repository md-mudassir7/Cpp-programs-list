#include<bits/stdc++.h>
using namespace std;
int knapsack(int w[],int v[],int weight,int n)
{
    if(n==0 || w==0)
        return 0;
    if(w[n-1]<=weight)
    {
        int include=v[n-1]+knapsack(w,v,weight-w[n-1],n-1);
        int exclude=knapsack(w,v,weight,n-1);
        return max(include,exclude);
    }
    else
        return knapsack(w,v,weight,n-1);
}
int main()
{
    int n;
    cin>>n;
    int w[n],v[n];
    for(int i=0;i<n;i++)
    {
        cin>>w[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }



    int weight;
    cin>>weight;
    cout<<knapsack(w,v,weight,n)<<endl;
    return 0;
}
