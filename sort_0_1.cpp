// sort 0 and 1 in an array with O(n) time
#include<bits/stdc++.h>
using namespace std;

void zeronone(int a[],int n)
{
    int c=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]==0)
            c++;
    }
   for(int i=0;i<n;i++)
    {
        if(i<c)
            a[i]=0;
        else
            a[i]=1;
    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}


int main()
{
    int a[]={0,1,1,0,1,1,1,0,1,0};
    int n=10;
    zeronone(a,n);
}
