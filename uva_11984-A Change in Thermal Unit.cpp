#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int cont=0,n;
    double f,c,d,ans;
    cin>>n;
    while(n--)
    {
        cin>>c>>d;
        f=c*(9.0/5.0)+32+d;
        ans=(f-32)*5/9.0;
        printf("Case %d: %.2lf\n",++cont,ans);
    }
}
