#include<iostream>
#include<bits/stdc++.h>
using namespace std;

long long int fact(long n, long long m);

int main()
{
    long long n,m,c;
    while(cin>>n>>m && n!=0 && m!=0)
    {
        c=fact(n,m);
        printf("%lld things taken %lld at a time is %lld exactly.\n",n,m,c);
    }

}
long long int fact(long n, long long m)
{
  long long result=1,temp,i,j=1;
  temp=n-m;
  for(i=temp+1;i<n+1;i++)
  {
     result*=i;

      if(j<m+1)
     {
         result/=j;
         j++;
     }
  }
  return result;
}
