#include<bits/stdc++.h>
using namespace std;
const int MAX_N=1000;
double arr[MAX_N];

int main()
{
    int n;
    cin>>n;
    for (int i=1;i<=n;i++)
    {
        cin>>arr[i];
    }
    for (int i=n;i>=1;i--)
    {
        cout<<fixed<<setprecision(2)<<arr[i]<<" ";
    }
    return 0;
}


