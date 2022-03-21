#include<bits/stdc++.h>
using namespace std;
struct Distance
{
    int d;
    Distance(int d_=0):d(d_){};
    void input()
    {
        cout<<"Enter distance: "<<endl;
        cin>>d;
    }
    Distance add (Distance& other)
    {
        return Distance(this->d+ other.d);
    }
};
int main()
{
    Distance d1,d2;
    d1.input();
    d2.input();
    Distance dsum = d1.add(d2);
    cout<< "Sum of two distances: "<<endl;
    cout<< dsum.d<<endl;
    return 0;
}
