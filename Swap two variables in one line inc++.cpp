#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x=10;
    int y=20;
    (x ^= y),(y ^= x),(x ^= y);
    cout<<x<<endl<<y;
}
