#include<bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for (int i=a;i<=b;i++)

int main()
{
    string s;
    int startSpace=0;
    getline(cin,s);

    FOR(i,0,s.size()-1)
    {
        if (s[i] != ' ')
        {
            startSpace=i;
            break;
        }
    }
    FOR(i,0,startSpace-1)
        cout<<" ";
    FOR(i,startSpace,s.size()-1)
    {
        if (s[i] != ' ')cout<<s[i];
        else
        {
            cout<<" ";
            FOR(j,i,s.size()-1)
            {
                if (s[j]!= ' ')
                {
                    i=j-1;
                    break;
                }
            }
        }
    }
    return 0;
}





