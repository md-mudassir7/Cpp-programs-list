#include<bits/stdc++.h>
using namespace std;
vector<int> sums;
void subsets(vector<int> &arr, int n, vector<int> &ans, int start, int sum)
{
    if(start == n)
    {
        ans.push_back(sum);
        return;
    }
    subsets(arr, n, ans, start+1, sum);
    sum += arr[start];
    subsets(arr, n, ans, start+1, sum);
}

vector<int> subsetSums(vector<int> arr, int N)
{
    vector<int> ans;
    int sum = 0;
    subsets(arr, N, ans, 0, sum);
    sort(ans.begin(), ans.end());
    return ans;
}
int main()
{
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
        cin>>arr[i];


    sums=subsetSums(arr,n);
    for(auto x : sums)
        cout<<x<<" ";
    return 0;
}

