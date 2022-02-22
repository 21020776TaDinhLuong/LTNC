#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,n;
    cin>>m>>n;
    for (int i=sqrt(m);i<=sqrt(n);i++)
    {
        cout<<i*i<<" ";
    }
    return 0;
}
