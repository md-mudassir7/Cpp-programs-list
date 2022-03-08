#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int n=s.length();
        map<int,int> m;
        char res=s[0];
        int ans=INT_MIN;
        for(int i=0;i<n;i++)
        {
            m[s[i]]++;
            if(m[s[i]]==ans)
            {
                if(res-'a'>s[i]-'a')
                    res=s[i];
            }
            else if(m[s[i]]>ans)
            {
                ans=m[s[i]];
                res=s[i];
            }
        }
        cout<<res<<endl;
    }
    return 0;
}
