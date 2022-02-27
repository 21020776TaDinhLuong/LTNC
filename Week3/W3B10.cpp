#include<bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for (int i=a;i<=b;i++)
bool isalpha(char c)
{
    return ((c>='a' && c<='z')||(c>='A'&&c<='Z'));
}
bool isdigit(char c)
{
    return (c>='0' && c<='9');
}
bool isString(string s)
{
    int otherCharacter=0;
    FOR(i,0,s.size()-1)
    {
        if (!(isalpha(s[i])||isdigit(s[i])))
            otherCharacter++;
    }
    return (!otherCharacter);
}
bool checkLength(string s)
{
    int s_length=s.size();
    return (s_length>=6 && s_length<=15);
}
bool checkStart(string s)
{
    return (!isdigit(s[0]));
}
bool check(string s)
{
    return (isString(s) && checkLength(s) && checkStart(s));
}
int main()
{
    string s;
    cin>>s;
    if (check(s))
        cout<<"Valid username.";
    else
        cout<<"Invalid username.";
    return 0;
}




