#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test_case,emply_1,emply_2,emply_3,value,who,cont=0;
    cin>>test_case;
    for(value=0; value<test_case; value++)
    {
        cin>>emply_1>>emply_2>>emply_3;

        if((emply_1>emply_2 && emply_1<emply_3) ||(emply_1<emply_2 && emply_1>emply_3))
            who=emply_1;

        if((emply_2>emply_3 && emply_2<emply_1) ||(emply_2<emply_3 && emply_2>emply_1))
            who=emply_2;

        if((emply_3>emply_2 && emply_3<emply_1) ||(emply_3<emply_2 && emply_3>emply_1))
            who=emply_3;

        if(emply_2==emply_3)
            who=emply_2;

        if (emply_1==emply_3)
            who=emply_1;

        if(emply_1==emply_2)
            who=emply_1;

        cont++;

        cout<<"Case "<<cont<<": "<<who<<endl;
    }
}
