#include<bits/stdc++.h>
using namespace std;
double exp(int x)
{
    double mu=1;
    double lt=1;
    double sum=1;
    double oldsum=0;
    int dem =0;
    if (x==0) return 1.0000;
    while (true)
    {
        ++dem;
        lt*=dem;
        mu*=x;
        sum+=(double)mu/lt;
        if (sum - oldsum < 0.001) return sum;
        oldsum=sum;
    }
}
int main()
{
    int x;
    cin>>x;
    cout<<fixed<<setprecision(4)<<exp(x);
    return 0;
}
