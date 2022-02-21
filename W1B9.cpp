#include<bits/stdc++.h>
using namespace std;
int main()
{
    float a, b, c;
    cin >> a >> b >> c;
    if (a+b>c &&a+c>b &&b+c>a)
    {
        float p = (a+b+c)/2;
        float s=sqrt(p*(p-a)*(p-b)*(p-c));
        cout<<fixed<<setprecision(2)<<s;
    }
    else
    {
        cout<<"invalid";
    }
    return 0;
}
