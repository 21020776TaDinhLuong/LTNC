#include<bits/stdc++.h>
using namespace std;
struct Student
{
    int rollNo;
    string name;
    int age;

    void print()
    {
        cout<<"Roll No: "<<rollNo<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;

    }
    void input()
    {
        cout<<"Write Roll No: "<<endl;
        cin>>rollNo;
        cout<<"Write Name: "<<endl;
        cin>>name;
        cout<<"Write Age: "<<endl;
        cin>>age;

    }

} student1[5];
int main()
{


    for (int i=0;i<5;i++)
    {
        student1[i].input();
    }
    cout<<"The details of the student with roll no.2 :"<<endl;
    for (int i=0;i<5;i++)
    {
        if (student1[i].rollNo ==2) student1[i].print();
    }
    return 0;

}
