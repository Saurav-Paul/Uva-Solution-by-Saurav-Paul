#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ara[4][4],minimum,movement,test,value,sum=0,var;

    char nm[10]="GBC";
    while(scanf("%d%d%d",&ara[1][1],&ara[1][2],&ara[1][3])!=EOF)
    {
        //input
        sum=0;
        sum=ara[1][1]+ara[1][2]+ara[1][3];
        for(test=2; test<4; test++)
        {
            for(value=1; value<4; value++)
            {
                cin>>ara[test][value];
                sum+=ara[test][value];

            }
        }
        //movement_bcg
        var=sum-(ara[1][1]+ara[2][3]+ara[3][2]);
        minimum=var;

        strncpy(nm, "BCG", 10);


        //movement_bgc
        var=sum-(ara[1][1]+ara[2][2]+ara[3][3]);
        if(minimum>var)
        {
            minimum=var;

            strncpy(nm, "BGC", 10);
        }

        //movement_cbg
        var=sum-(ara[1][3]+ara[2][1]+ara[3][2]);
        if(minimum>var)
        {
            minimum=var;

            strncpy(nm, "CBG", 10);
        }

        //movement_cgb
        var=sum-(ara[1][3]+ara[2][2]+ara[3][1]);
        if(minimum>var)
        {
            minimum=var;

            strncpy(nm, "CGB", 10);
        }

//movement_gbc
        var=sum-(ara[1][2]+ara[2][1]+ara[3][3]);
        if(minimum>var)
        {
            minimum=var;

            strncpy(nm, "GBC", 10);
        }

        //movement_gcb
        var=sum-(ara[1][2]+ara[2][3]+ara[3][1]);
        if(minimum>var)
        {
            minimum=var;

            strncpy(nm, "GCB", 10);
        }


        cout<<nm<<" "<<minimum<<endl;
    }
    return 0;
}

