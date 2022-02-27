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
    bool ok=true;
    FOR(k,0,n/2-1)
    {
        if (a[k] != a[n-1-k]) ok=false;
    }
    if (ok) cout<<"Symmetric array.";
    else cout<<"Asymmetric array.";
    return 0;
}

