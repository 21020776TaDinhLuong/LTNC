#include<bits/stdc++.h>
using namespace std;
class Employee
{
public:
    string name;
    string yearOfJoining;
    string address;
    void input(string n="",string y="", string a="")
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
        string y;
        string a;
        getline (cin,s);

        getline(cin,y);

        getline(cin,a);

        employee[i].input(s,y,a);
    }
    cout<<"Name"<<"   "<<"Year Of Joining"<<"   "<<"Address"<<endl;
    for (int i=0;i<3;i++)
    {
        employee[i].print();
    }
    return 0;
}
