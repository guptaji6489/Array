#include<bits/stdc++.h>
using namespace std;

void bubble(int a[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-1;j++)
        {
            if(a[j]>a[j+1])
            {
                swap(a[j],a[j+1]);
            }
        }
    }

    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}

int main()
{
    int a[]={1,8,5,3,4,9,2,4,9,7};
    int n=10;
    bubble(a,n);

    return 0;
}
