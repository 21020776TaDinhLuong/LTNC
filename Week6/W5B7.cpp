#include<bits/stdc++.h>
using namespace std;
int t1;
struct Student
{
    int rollNo;
    string name;
    int age;
    string address;

    void printname()
    {
        cout<<"Students having age 14: "<<endl;
        if (age ==14) cout<<name<<endl;

    }
    void printname1()
    {
        cout<<"Students having even roll number: "<<endl;
        if (rollNo %2 ==0) cout<<name<<endl;
    }
    void printdetail( )
    {
        if (rollNo == t1 )
        {
            cout<<name<<endl<<age<<endl<<address<<endl;
        }
    }
    void input()
    {
        cout<<"Write Roll No: "<<endl;
        cin>>rollNo;
        cout<<"Write Name: "<<endl;
        cin>>name;
        cout<<"Write Age: "<<endl;
        cin>>age;
        cout<<"Write address: "<<endl;
        cin>>address;

    }

} student1[15];
int main()
{
    for (int i=0;i<15;i++)
    {
        student1[i].input();
    }
    for (int i=0;i<15;i++)
    {
        student1[i].printname();
        student1[i].printname1();
    }
    cout<<"Enter roll: ";
    cin>>t1;
    for (int i=0;i<15;i++)
    {
            student1[i].printdetail();
    }
    return 0;

}
