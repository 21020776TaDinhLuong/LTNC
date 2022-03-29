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
    cout<<"Repeated Number: "<<"    "<<" "<<"Frequency: "<<endl;
    for (auto x:mp)
    {
        if (mp[x.first] >=2)
        cout<<x.first<<'\t'<<'\t'<<'\t'<<x.second<<endl;
    }
    return 0;
}

