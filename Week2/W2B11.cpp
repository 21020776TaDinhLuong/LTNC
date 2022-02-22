#include<bits/stdc++.h>
using namespace std;
const int MAX_N=1000;
double a[MAX_N];

int main()
{

    int n;
    cin>>n;
    double sum=0;
    for (int i=1;i<=n;i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    double avg = sum/n;
    double var=0;
    for (int i=1;i<=n;i++)
    {
        var += (double)1/n*(a[i]-avg)*(a[i]-avg);
    }
    cout<<fixed<<setprecision(2)<<var;
    return 0;
}



