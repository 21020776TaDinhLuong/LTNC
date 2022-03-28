#include<bits/stdc++.h>
using namespace std;
class Employee
{
public:
    string name;
    int yearOfJoining;
    string address;
    void input(string n="",int y=0, string a="")
    {
        name=n;
        yearOfJoining=y;
        address=a;
    }
    void print()
    {
        cout<<name<<"       "<<yearOfJoining<<"                  "<<address<<endl;
    }

} employee[3];
int main()
{
    for (int i=0;i<3;i++)
    {
        string s;
        int y;
        string a;
        cin>>s>>y>>a;
        employee[i].input(s,y,a);
    }
    cout<<"Name"<<"   "<<"Year Of Joining"<<"   "<<"Address"<<endl;
    for (int i=0;i<3;i++)
    {
        employee[i].print();
    }
    return 0;
}
