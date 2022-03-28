#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,d;
    cin>>n>>d;
    vector<int> a,b;
    for (int i=0;i<d;i++)
    {
        int k;
        cin>>k;
        a.push_back(k);
    }
    for (int i=d;i<n;i++)
    {
        int k;
        cin>>k;
        b.push_back(k);
    }
    for (auto x:a)
    {
        b.push_back(x);
    }
    for (auto x:b)
    {
        cout<<x<<" ";
    }
    return 0;
}
