#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;



/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}


 // } Driver Code Ends
void merge(int arr[], int p, int q, int r)
{
    int n1=q-p+1;
    int n2=r-q;
    int temp[n1],temp1[n2];
    for(int i=0;i<n1;i++)
    {
        temp[i]=arr[p+i];
    }
    for(int i=0;i<n2;i++)
    {
        temp1[i]=arr[q+1+i];
    }
    int i,j,k;
    i=0;
    j=0;
    k=p;
    while(i<n1 && j<n2)
    {
        if(temp[i]<=temp1[j])
        {
            arr[k]=temp[i];
            i++;
        }
        else
        {
            arr[k]=temp1[j];
            j++;
        }
        k++;
    }
    while(i<n1)
    {
        arr[k]=temp[i];
        i++;
        k++;
    }
    while(j<n2)
    {
        arr[k]=temp1[j];
        j++;
        k++;
    }
}
void mergeSort(int arr[], int l, int r)
{
    if(r>l)
    {



        int mid=(l+r)/2;
        mergeSort(arr,l,mid);
        mergeSort(arr,mid+1,r);
        merge(arr,l,mid,r);
    }
}


int main()
{
    int n,T,i;

    scanf("%d",&T);

    while(T--)
    {
        scanf("%d",&n);
        int arr[n+1];
        for(i=0;i<n;i++)
          scanf("%d",&arr[i]);

        mergeSort(arr, 0, n-1);
        printArray(arr, n);
    }
    return 0;
}
