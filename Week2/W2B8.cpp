#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long x;
    cin>>x;
    int cnt =0;
    do
    {
        ++cnt;
        x/=10;
    } while (x!=0);
    cout<<cnt;
    return 0;
}

