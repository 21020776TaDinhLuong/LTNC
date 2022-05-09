#include <bits/stdc++.h>
using namespace std;
class Point
{
public:
    Point()
    {

    };
    Point(int xval,int yval)
    {
        xloc = xval;
        yloc = yval;
    }
        friend Point operator + (Point a, Point b)
        {
            return Point(a.xloc+b.xloc,a.yloc+b.yloc);
        }
        friend ostream & operator << (ostream &out, const Point &c);
        friend istream & operator >> (istream &in,  Point &c);

private:
    int xloc;
    int yloc;
};

ostream & operator << (ostream &out, const Point &c)
{
    out << c.xloc<<","<<c.yloc;
    return out;
}

istream & operator >> (istream &in,  Point &c)
{
    in >> c.xloc>>c.yloc;
    return in;
}
int main()
{
    Point p;
    cin>>p;
    cout<<p;
    return 0;
}

