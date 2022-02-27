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
    double x;
    cin>>x;
    a.push_back(x);
    sort(a.begin(),a.end());
    FOR(i,0,a.size()-1)
    {
        cout<<fixed<<setprecision(2)<<a[i]<<" ";
    }
    return 0;
}
