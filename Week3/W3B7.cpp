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
int main()
{
    int numAlpha=0,numDigit=0,numOther=0;
    string s;
    getline(cin,s);

    FOR(i,0,s.size()-1)
    {
        if (isalpha(s[i]))
        {
            numAlpha++;
        }
        else if (isdigit(s[i]))
        {
            numDigit++;
        }
        else
        {
            numOther++;
        }
    }
    cout<<numAlpha<<" "<<numDigit<<" "<<numOther;
    return 0;
}



