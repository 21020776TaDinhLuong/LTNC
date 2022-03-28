#include<bits/stdc++.h>
using namespace std;
class Student
{
public:
    int rollNo;
    string name;
    Student(int r, string n)
    {
        rollNo=r;
        name=n;
    }
};
int main()
{
    Student student1(2,"John");
    cout<<student1.rollNo<<" "<<student1.name<<endl;
    return 0;
}
