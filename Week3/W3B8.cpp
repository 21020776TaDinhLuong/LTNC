#include<bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for (int i=a;i<=b;i++)

int main()
{
    string s;
    getline(cin,s);

    FOR(i,0,s.size()-1)
    {
        if (i>s.size()-4 || s.substr(i,4)!="Zues")
        {
            cout<<s[i];
        }
        else
        {
            cout<<"Zeus";
            i+=3;
        }

    }
    return 0;
}




