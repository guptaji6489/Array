#include<bits/stdc++.h>
using namespace std;

int sub(int a[],int n)
{
    int max1=a[0];
    int min1=0;
    for(int i=0;i<n;i++)
    {
        min1 = min1+a[i];
        if(max1<min1)
        {
            max1=min1;
        }
        if(min1<0)
        {
            min1=0;
        }

    }
    return max1;
}

int main()
{
    int a[]={1,2,-8,5,9,-3,-7,2,8,-4,-6,-1,8};
    int n=13;
    cout<<"Maximum sub array is "<<sub(a,n);
    return 0;
}
