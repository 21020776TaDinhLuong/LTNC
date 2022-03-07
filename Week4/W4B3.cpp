void printArrow(int n,bool left)

{
    if(left == 0)
    {
        vector<vector<char>>a(2*n,vector<char>(2*n,' '));
    int id1=0,id2=n-1;

    for (int i=0;i<=n-1;i++)
    {

        for (int j=id1;j<=id2;j++)
        {
            a[i][j]='*';

        }
        id1+=2;
        id2+=1;

    }


     id1=2*n-2,id2=2*n-2;

    for (int i=n-1;i<=2*n-2;i++)
    {

        for (int j=id1;j<=id2;j++)
        {
            a[i][j]='*';

        }
        id1-=2;
        id2-=1;
    }








    for (int i=0;i<2*n-1;i++)
    {
        for (int j=0;j<2*n;j++)
        {
            cout<<a[i][j];
        }
        cout<<endl;
    }
    }
    else
        {
            vector<vector<char>>a(2*n,vector<char>(2*n,' '));
    int id1=0,id2=n-1;

    for (int i=0;i<=n-1;i++)
    {

        for (int j=id1;j<=id2;j++)
        {
            a[i][j]='*';

        }
        id1+=2;
        id2+=1;

    }


     id1=2*n-2,id2=2*n-2;

    for (int i=n-1;i<=2*n-2;i++)
    {

        for (int j=id1;j<=id2;j++)
        {
            a[i][j]='*';

        }
        id1-=2;
        id2-=1;
    }



for (int i=0;i<=2*n-2;i++)
{
    reverse(a[i].begin(),a[i].end());
}




    for (int i=0;i<2*n-1;i++)
    {
        for (int j=0;j<2*n;j++)
        {
            cout<<a[i][j];
        }
        cout<<endl;
    }
        }


}
