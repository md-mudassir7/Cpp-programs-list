#include<iostream>
using namespace std;
int &fun()
{
    static int m=15;
    return m;
}

int main()
{
    int *arr[]={5,2,3,4,9};






    int j;
    for(j=0;j<5;j++)
    {
        printf("%d ",*arr);
        arr++;
    }
    return 0;
}
