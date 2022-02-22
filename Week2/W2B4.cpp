#include<bits/stdc++.h>
using namespace std;
int main()
{
    int total, totalLegs;
    cin >> total >> totalLegs;
    bool flag = false;
    for (int numChicken =1 ;numChicken<=1000;numChicken++)
    {
        if (numChicken*2+(total-numChicken)*4 == totalLegs)
        {
            cout <<"chicken = "<<numChicken<<", dog = "<<total-numChicken;
            flag=true;
            break;
        }
    }
    if (!flag) cout<<"invalid";
    return 0;
}
