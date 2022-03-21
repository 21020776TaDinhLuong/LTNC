#include<bits/stdc++.h>
using namespace std;
struct Student
{
    int rollNo;
    string name;
    int age;
    int marks[5];
    void print()
    {
        cout<<"Roll No: "<<rollNo<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Marks(5): ";
        for (int i=0;i<5;i++)cout<<marks[i]<<" ";
    }

} student1;
int main()
{
    cout<<"Write Roll No: "<<endl;
    cin>>student1.rollNo;
    cout<<"Write Name: "<<endl;
    cin>>student1.name;
    cout<<"Write Age: "<<endl;
    cin>>student1.age;
    cout<<"Write 5 marks: "<<endl;
    for (int i=0;i<5;i++)
    {
        cin>>student1.marks[i];
    }
    student1.print();

}