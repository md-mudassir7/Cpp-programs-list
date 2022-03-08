#include<bits/stdc++.h>
using namespace std;
class A
{
    int n=10;
public:
    void print()
    {
        cout<<n<<endl;
    }
};
class B:public A
{
    int n=1;
public:
    void print()
    {
        cout<<n<<endl;
    }
};
int main()
{

    A *a = new B;
    a->print();
    return 0;
}
