#include<bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for (int i=a;i<=b;i++)
int main()
{
    int numWord=0;
    string s;
    getline(cin,s);
    s=" "+s;
    FOR(i,1,s.size()-1)
    {
        if (s[i]!=' ' && s[i-1] == ' ')
        {
            numWord++;
        }
    }
    cout<<numWord;
    return 0;
}


