#include<bits/stdc++.h>
using namespace std;
struct Customer
{
    string name;
    int accountNumber;
    int balance;
    void input()
    {

        cout<<"Write Name: "<<endl;
        cin>>name;
        cout<<"Write Account Number: "<<endl;
        cin>>accountNumber;
        cout<<"Write Balance: "<<endl;
        cin>>balance;

    }
    void printname()
    {
        cout<<"Customers having balance less than $200: ";


            if (balance < 200) cout<<name<<endl;

    }
    void add ()
    {


            if (balance>1000) balance+=100;
            cout<< "The incremented balance: "<<balance<<endl;


    }

} cus[15];
int main()
{
    for(int i=0;i<15;i++)
    {
        cus[i].input();
    }
    for(int i=0;i<15;i++)
    {
        cus[i].printname();
    }
    for(int i=0;i<15;i++)
    {
        cus[i].add();
    }
    return 0;

}
