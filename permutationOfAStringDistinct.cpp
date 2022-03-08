#include<bits/stdc++.h>
using namespace std;
bool check(string s,int ind,int n)
{
    for(int i=ind;i<n-1;i++)
    {
        if(s[ind]==s[i])
            return 0;
    }
    return 1;
}
void permutations(string s,int l,int r)

    if(l==r)
        cout<<s<<" ";
    else
    {
        for(int i=l;i<=r;i++)
        {
            if(check(s,l,i))
            {
                swap(s[l],s[i]);
                permutations(s,l+1,r);
                swap(s[l],s[i]);
            }
        }
    }
}
int  main()
{
    string s;
    cin>>s;
    int n=s.size();
    permutations(s,0,n-1);
    return 0;
}
