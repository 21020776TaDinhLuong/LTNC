long long int  factorial(int n)
{
    if (n==1) return 1;
    long long int result =1;
    for (long long int i=1;i<=n;i++)
    {result *= i;}
    return result;
}
