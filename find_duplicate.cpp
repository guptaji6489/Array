#include<bits/stdc++.h>
using namespace std;


void findduplicate(int a[],int n)
{
    set<int>s;
    for(int i=0;i<n;i++)
    {
        bool b = s.find(a[i])!=s.end();
        if(b)
             cout<<a[i];
        else
           s.insert(a[i]);
    }



}
int main()
{
    int a[]={1,3,2,3,5};
    int n=5;
    findduplicate(a,n);
}
