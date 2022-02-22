#include<bits/stdc++.h>
using namespace std;
const int MAX_N=1000;
double a[MAX_N],b[MAX_N];

int main()
{
    double product=0;
    int n;
    cin>>n;
    for (int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    for (int i=1;i<=n;i++)
    {
        cin>>b[i];
    }
    for (int i=1;i<=n;i++)
    {
        product+=a[i]*b[i];
    }
    cout<<fixed<<setprecision(2)<<product;
    return 0;
}



