#include<bits/stdc++.h>
using namespace std;
struct Book
{
    int accessionNumber;
    string nameOfAuthor;
    string bookTitle;
    bool flag;
    Book(int acc=0,string name="",string title="", bool issue=false)
    {
        accessionNumber=acc;
        nameOfAuthor=name;
        bookTitle=title;
        flag=issue;
    }
};
struct Menu
{
    vector<Book> b;
    void display()
    {
        cout<<"the information of the books: ";
        for (Book x: b)
        {
            cout<<"accessionNumber: "<<x.accessionNumber<<endl;
            cout<<"nameOfAuthor: "<<x.nameOfAuthor<<endl;
            cout<<"bookTitle: "<<x.bookTitle<<endl;
            if (x.flag)
            cout<<"Issued: Yes"<<endl;
            else cout<<"Issued: No"<<endl;
        }
    }
    void add(Book bk)
    {
        b.push_back(bk);
    }
    void display1(string nameauth)
    {
        for (Book x: b)
        {
            if (x.nameOfAuthor == nameauth)
            {
                cout<<x.bookTitle<<endl;
            }
        }
    }
    void display2(string title)
    {
        int cnt=0;
        for (Book x: b)
        {
            if (x.bookTitle == title)
            {
                cnt++;
            }
        }
        cout<<cnt<<endl;
    }
    void display3()
    {
        cout<<"the number of book in the library: "<<endl;
        cout<<b.size()<<endl;
    }
    void issue(Book bk)
    {
        for (int i=0;i<b.size();i++)
        {
            if (b[i].bookTitle == bk.bookTitle)
            {
                b[i].flag=true;
                b.erase(b.begin()+i);
                break;
            }
        }
    }
};
int main()
{
    Menu m;
    m.add(Book(1,"Allain","Informatics",false));
    m.display();
    m.display1("Allain");
    m.display2("Informatics");
    m.display3();
    m.issue(m.b[0]);
    return 0;
}
