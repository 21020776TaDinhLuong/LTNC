#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<int,int> mp;
    int n;
    cin>>n;
    for (int i=0;i<n;i++)
    {
        int k;
        cin>>k;
        mp[k]++;
    }
    for (auto x:mp)
    {
        if (mp[x.first] == 1) cout <<x.first<<" ";
    }
    return 0;
}

