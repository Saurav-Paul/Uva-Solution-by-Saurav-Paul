#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ndegree,check,hour,min,degree,hd,md;
    while(cin>>ndegree)
    {
        check=hd=md=degree=0;
        for(hour=0; hour<12; hour++)
        {
            for(min=0; min<59; min++)
            {
                md+=6;
                if(min%12==0)
                    hd+=6;
                degree=abs(md-hd);
                if(degree==ndegree || (360-degree)==ndegree)
                {
                    check=1;
                    break;
                }
            }
        }
        if(check)
            cout<<"Y"<<endl;

        else
            cout<<"N"<<endl;


    }
    return 0;
}

