#include<bits/stdc++.h>
using namespace std;

void mergesorted(int a[],int b[],int a1,int b1)
{
    int c[a1+b1];
    int i=0,j=0,k=0;
    while(i<a1 && j<b1)
    {
        if(a[i]<b[j])
        {
            c[k++]=a[i++];
        }
        else{
            c[k++]=b[j++];
        }
    }
    while(i<a1)
    {
         c[k++]=a[i++];
    }
    while(j<b1)
    {
         c[k++]=b[j++];
    }


    for(int i=0;i<a1+b1;i++)
    {
        cout<<c[i]<<" ";
    }
}

int main()
{
    int a[]={1,3,4,7,9,15};
    int b[]={2,19,6,24,40,57,63};
    mergesorted(a,b,6,7);

    return 0;
}


