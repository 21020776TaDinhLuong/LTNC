#include<bits/stdc++.h>
using namespace std;
int main()
{
    int number1, number2, number3;
    cin >> number1 >> number2 >> number3;
    if (number1 == number2 && number2 == number3)
    {cout<<"true";}
    else if (number1 != number2 || number1 != number3 || number2 != number3)
    {cout<<"false";}
    return 0;
}
