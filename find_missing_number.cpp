#include<bits/stdc++.h>
using namespace std;

/*int missing(int a[],int n)
{
    int b=0;
    int a1 = n*(n+1)/2;
    for(int i=0;i<n-1;i++)
         b += a[i];
   return a1-b;

}*/

int missing1(int a[],int n)
{
    int b=0;
    int a1 = 0;
    for(int j=1;j<=n;j++)
         a1 ^= j;
    for(int i=0;i<n-1;i++)
         b ^= a[i];
   return a1^b;

}
int main()
{
    int a[]={1,3,4,5,6,7,8,9};
    int n=9;
    cout<<missing(a,n)<<endl;
    cout<<missing1(a,n);
}
