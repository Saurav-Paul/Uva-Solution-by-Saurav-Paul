#include <iostream>
using namespace std;
int func(int m, int n);

main()
{
    int row,col,ans,temp;
    int t;
    cin>>t;
    int value=1;
   while(t--)
    {
        cin>>row>>col;
        if (row==col) ans=2;
        else if (row==0 || col==0) ans=1;
        else
        {
            temp=func(row,col);
            ans = row/temp + col/temp;
        }
        cout<<"Case "<<value++<<": "<<ans<<endl;
    }
}
int func(int row, int col)
{
    if (row%col==0) return col;
    else return func(col,row%col);
}
