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
    sort(a.begin(),a.end());
    a.erase(unique(a.begin(),a.end()),a.end());
    FOR(i,0,a.size()-1)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
