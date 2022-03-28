#include<bits/stdc++.h>
using namespace std;
struct Customer
{
    string name;
    int salary;
    int hoursperday;
    void input()
    {

        cout<<"Write Name: "<<endl;
        cin>>name;
        cout<<"Write Salary "<<endl;
        cin>>salary;
        cout<<"Write Hours Per Day: "<<endl;
        cin>>hoursperday;

    }

    void add ()
    {


            if (hoursperday==8) salary+=50;
            else if (hoursperday==10) salary+=100;
            else if (hoursperday>=12) salary+=150;
            cout<< "The final salary: "<<salary<<endl;


    }

} cus[10];
int main()
{
    for(int i=0;i<10;i++)
    {
        cus[i].input();
    }
    for(int i=0;i<10;i++)
    {
        cus[i].add();
    }
    return 0;

}

