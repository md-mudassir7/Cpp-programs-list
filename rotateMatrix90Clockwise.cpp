#include<bits/stdc++.h>
using namespace std;
#define N 3
void rotate90(int mat[N][N])
{
    for(int i=0;i<N/2;i++)
    {
        for(int j=i;j<N-1-i;j++)
        {
            int temp=mat[i][j];
            mat[i][j]=mat[N-1-j][i];
            mat[N-1-j][i]=mat[N-1-i][N-1-j];
            mat[N-1-j][N-1-j]=mat[j][N-1-i];
            mat[j][N-1-i]=temp;
        }
    }
}
int main()
{
    int mat[N][N];
    for(int i=0;i<N;i++)
    {

        for(int j=0;j<N;j++)
        {
            cin>>mat[i][j];
        }
    }



    cout<<endl;
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
            cout<<mat[i][j]<<" ";
        cout<<endl;
    }
    cout<<endl;
    rotate90(mat);
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
            cout<<mat[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}
