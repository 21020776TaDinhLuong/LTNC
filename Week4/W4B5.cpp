bool isPrime (int number)
{
    bool ok=true;
    if (number <2) return 0;
    for (int i=2;i<=sqrt(number);i++)
    {
        if (number % i ==0)
        {
            ok =0;
            break;
        }
    }
    return ok;
}
