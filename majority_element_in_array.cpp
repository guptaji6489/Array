#include<bits/stdc++.h>
#include<tr1/unordered_map>
using namespace std::tr1;
using namespace std;
/*
void majority(int a[],int n)
{
    int index=-1;
    int maxcount=0;

    for(int i=0;i<n;i++)
    {
        int c=0;
        for(int j=0;i<n;j++)
        {
            if(a[i]==a[j])
                c++;
        }
        if(c>maxcount)
        {
            maxcount=c;
            index=i;
        }

    }
    if(maxcount>n/2)
    {
        cout<<"majority element is "<<a[index]<<endl;
    }
    else
        {
            cout<<"majority element is not there" <<endl;
        }
} */

void majority(int a[],int n)
{
    unordered_map<int,int> m;
    for(int i=0;i<n;i++)
    {
     m[a[i]]++;
    }

    int c=0;
    unordered_map<int,int>::iterator it = m.begin();
    while(it != m.end())
    {
        if(it->second > n/2)
        {
             cout<<"majority element is "<<it->first<<endl;
             c=1;break;
        }it++;
    }

    if(c==0)
    {
         cout<<"majority element is not there" <<endl;
    }
}

int main()
{
    int a[]={1,2,3,2,2,4,5,2,2,2};
    int n=10;
  majority(a,n);

}

