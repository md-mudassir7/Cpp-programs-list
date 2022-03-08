#include<bits/stdc++.h>
using namespace std;
bool check(string s)
{
    int n = s.size();
    int cnt = 0;
    for(int i=0;i<n;i++)
    {
        if(s[i]>='0' && s[i]<='9')
            cnt++;
    }
    return cnt==n;
}
int main()
{
    string s;
    cin>>s;
    cout<<check(s)<<endl;
}
