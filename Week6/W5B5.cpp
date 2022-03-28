#include<bits/stdc++.h>
using namespace std;
struct Mark
{
    int roll;
    string name;
    int chem_marks;
    int maths_marks;
    int phy_marks;
    void input()
    {
        cout<<"Enter roll,name,chemistry marks,mathematics marks, physics marks: "<<endl;

        cin>>roll>>name>>chem_marks>>maths_marks>>phy_marks;
    }
    void print()
    {
        cout<< "The pecentage of the roll no."<<roll<<": "<<endl;
        cout<<"Chemistry: "<<double(chem_marks/(chem_marks+maths_marks+phy_marks))<<endl;
        cout<<"Mathematics: "<<double(maths_marks/(chem_marks+maths_marks+phy_marks))<<endl;
        cout<<"Physics: "<<double(phy_marks/(chem_marks+maths_marks+phy_marks))<<endl;
    }
} student[5];
int main()
{
    for (int i=0;i<5;i++)
    {
        student[i].input();
    }
    for (int i=0;i<5;i++)
    {
        student[i].print();
    }
    return 0;
}
