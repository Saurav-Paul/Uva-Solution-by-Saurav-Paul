#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long  num,revnum=0,value,test,pen,test_case,cont;

    while(cin>>test_case)
    {

        for(value=0; value<test_case; value++)
        {
            cin>>num;

            pen=num;
            cont=0;
            while(1)
            {

                while(num!=0)
                {
                    revnum=revnum*10+num%10;
                    num/=10;
                }

                if(revnum==pen)
                {
                    break;
                }
                pen+=revnum;
                num=pen;
                cont++;
                revnum=0;
            }
            printf("%lld %lld\n",cont,pen);
            pen=0;
            cont=0;
            num=0;
            revnum=0;
        }
    }
}
