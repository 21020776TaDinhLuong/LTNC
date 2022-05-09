#include <bits/stdc++.h>
using namespace std;
class Complex
{
private:
    int realValue;
    int imaginaryValue;
public:
    Complex(int a = 0, int b=0)
    {
        realValue=a;
        imaginaryValue=b;
    }
    friend Complex operator + (Complex a, Complex b)
    {
        return Complex(a.realValue+b.realValue,a.imaginaryValue+b.imaginaryValue);
    }

    friend Complex operator- ( Complex& c);


friend ostream & operator << (ostream &out, const Complex &c);
friend istream & operator >> (istream &in,  Complex &c);
};
ostream & operator << (ostream &out, const Complex &c)
{
    out << c.realValue<<(c.imaginaryValue > 0 ? '+' : '-')<<abs(c.imaginaryValue)<<"i";
    return out;
}
Complex operator- ( Complex& c)
{
    return Complex(-c.realValue,-c.imaginaryValue);
}

istream & operator >> (istream &in,  Complex &c)
{
    in >> c.realValue>>c.imaginaryValue;
    return in;
}
int main()
{

    Complex c1, c2;
     cin>>c1>>c2;
     Complex c3 = c1+c2;
     cout<< -c3;
    return 0;
}
