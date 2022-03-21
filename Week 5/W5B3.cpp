#include<bits/stdc++.h>
using namespace std;
struct Student
{
    int rollNo;
    string name;
    int age;
    string address;
    int marks[5];
    void print()
    {
        cout<<"Roll No: "<<rollNo<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Address: "<<address<<endl;
        cout<<"Marks(5): ";
        for (int i=0;i<5;i++)cout<<marks[i]<<" ";
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
        cout<<"Write 5 marks: "<<endl;
        for (int i=0;i<5;i++)
            {
                cin>>marks[i];
            }
    }

} student1[15];
int main()
{
    cout<<"Write the details of 15 students: "<<endl;
    for (int i=0;i<15;i++)
    {
        student1[i].input();
    }
    for (int i=0;i<15;i++)
    {
        student1[i].print();
    }
    return 0;

}
