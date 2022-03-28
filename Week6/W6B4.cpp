#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    string ans ="";
    cin>>s;
    int n=s.size();
    for (int i=0;i<n-1;i++)
    {
        if (s[i]!= s[i+1]) ans +=s[i];
        else {ans+=s[i];ans += '*';}
    }
    ans+=s.back();
    cout<<ans;
}


