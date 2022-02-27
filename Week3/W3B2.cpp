#include<bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for (int i=a;i<=b;i++)
int main()
{
    int n;
    cin>>n;
    vector<double> a(n),b(n);
    FOR(i,0,n-1)
    {
        cin>>a[i];
    }
    sort(a.begin(),a.end(),greater<double>());
    FOR(i,0,n-1)
    {
        cout<<fixed<<setprecision(2)<<a[i]<<" ";
    }
    return 0;
}
