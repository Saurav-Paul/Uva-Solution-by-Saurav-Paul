#include<iostream>
using namespace std;

main()
{
    int ncola,ecola,tcola,value,temp;
    while(cin>>ncola && ncola!=0)
    {
        ecola=tcola=0;
        tcola=ncola/3;
        ecola=tcola+ncola%3;
        while(ecola)
        {
            temp=ecola/3;
            ecola=temp+ecola%3;
            tcola+=temp;
            if(ecola==2)
            {
                ecola++;
            }
            if(ecola/3==0 && ecola%3==1)
            {
                break;
            }
        }
        cout<<tcola<<endl;
    }
}
