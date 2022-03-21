#include<bits/stdc++.h>
using namespace std;
struct ComplexNumber
{
    int real;
    int virt;
    ComplexNumber(int real_=0,int virt_=0): real(real_),virt(virt_){};
    void input()
    {
        cout<<"Enter real and virtual part: "<<endl;

        cin>>real>>virt;
    }
    void print()
    {
        cout<<real<<"+"<<virt<<"i"<<endl;

    }
    ComplexNumber add(ComplexNumber& other)
    {
        return ComplexNumber(real+other.real,virt+other.virt);
    }
} ;
int main()
{
    ComplexNumber c,c1,c2;
    c1.input();
    c2.input();
    c = c1.add(c2);
    c.print();
    return 0;
}
