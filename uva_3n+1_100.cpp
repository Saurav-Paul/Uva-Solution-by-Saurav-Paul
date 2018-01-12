#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main()
{
    long long st,sp,n,len,max_len;
    while(scanf("%lld%lld",&st,&sp)!=EOF)
    {
    max_len=0;
    cout<<st<<" "<<sp<<" ";
    if (st>sp) swap(st,sp);
    while(st<=sp)
    {
        len=1;
        n=st;
        while(n!=1)
        {
            if(n%2==0)
            {
                n=n>>1;
            }
            else
            {
                n=3*n+1;
            }
            len++;
        }
        if(len>max_len)
        {
            max_len=len;
        }
        st++;
    }
    cout<<max_len<<endl;
    }
    return 0;
}
