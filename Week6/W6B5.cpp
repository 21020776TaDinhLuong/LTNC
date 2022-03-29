#include <bits/stdc++.h>
using namespace std;
class Area
{
public:
    int length;
    int breadth;
    Area(int l,int b):length(l),breadth(b){};
    int returnArea()
    {
        return length*breadth;
    }
};
int main()
{
    int length;
    int breadth;
    cin>>length>>breadth;
    Area A(length,breadth);
    cout<<A.returnArea();
    return 0;
}
