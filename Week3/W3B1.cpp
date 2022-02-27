#include<bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for (int i=a;i<=b;i++)
int main()
{
    int n;
    cin>>n;
    vector<int> a(n),b(n);
    FOR(i,0,n-1)
    {
        cin>>a[i];
    }
    FOR(i,0,n-1)
    {
        cin>>b[i];
    }
    bool ok=true;
    FOR(i,0,n-1)
    {
        if (a[i]!= b[i]) ok =false;
    }
    if (ok) cout<<"YES";
    else cout<<"NO";
    return 0;
}
