
// sort 0 and 1 in an array with O(n) time
#include<bits/stdc++.h>
using namespace std;

void zerononentwo(int a[],int n)
{
    int low=0,high=n-1,mid=0;
    while(mid<=high)
    {
        switch(a[mid])
        {
            case 0: swap(a[low],a[mid]);
            low++;mid++;break;
            case 1: mid++;break;
            case 2:swap(a[mid],a[high]);
                high--;break;
        }
    }

    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}


int main()
{
    int a[]={0,1,1,2,1,2,1,0,1,0};
    int n=10;
    zerononentwo(a,n);
}
