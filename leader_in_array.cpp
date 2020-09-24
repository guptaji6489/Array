#include<bits/stdc++.h>
using namespace std;

void leader(int a[],int n)
{
    int m = a[n-1];
    for(int i=n-2;i>=0;i--)
    {
        if(a[i]>m)
        {
            cout<<"Leader is : "<<a[i]<<endl;
            m=a[i];
        }
    }
}
int main()
{
    int a[]={15,16,3,2,6,1,4};
    int n=7;
    leader(a,n);

    return 0;
}
