#include<bits/stdc++.h>
using namespace std;


void removeduplicate1int a[],int n)
{
    int j=0;
    for(int i=0;i<n-1;i++)
    {
        if(a[i]!=a[i+1])
        {
            a[j]=a[i];
            j++;
        }
    }
    a[j]=a[n-1];

    for(int i=0;i<=j;i++)
    {
        cout<<a[i]<<"   ";
    }
}
int main()
{
    int a[]={1,2,2,2,3,4,5,5,5};
    int n=9;
    removeduplicate1(a,n);
}
